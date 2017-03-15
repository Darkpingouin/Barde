/*
  ==============================================================================

    MidiManager.cpp
    Created: 7 Mar 2017 5:25:20pm
    Author:  Anthony

  ==============================================================================
*/

#include "MidiManager.hh"

MidiManager::MidiManager() : AMidiManager()
{
}

MidiManager::~MidiManager()
{
}

void MidiManager::noteOn(int channel, int noteNumber, float velocity, double time) noexcept
{
	MidiMessage message = MidiMessage::noteOn(channel, noteNumber, (uint8)velocity);
	message.setTimeStamp(time);
	addMessageToList(message);
	_midiSequence.addEvent(message);
	_midiSequence.updateMatchedPairs();
}

void MidiManager::noteOff(int channel, int noteNumber, float velocity, double time) noexcept
{
	MidiMessage message = MidiMessage::noteOff(channel, noteNumber, (uint8)velocity);
	message.setTimeStamp(time);
	addMessageToList(message);
	_midiSequence.addEvent(message);
	//_midiSequence.updateMatchedPairs();
}


Midi MidiManager::createMidi()
{
	MemoryOutputStream	midiStream;
	Midi				midi;

	_midiBuff.addTrack(_midiSequence);
	_midiBuff.writeTo(midiStream, 1);
	midi.setMidiSize(midiStream.getDataSize());
	midi.setMidiArray((char*)midiStream.getData());
	_midiSequence.clear();
	return (midi);
}

void		MidiManager::writeToFile(const std::string filePath)
{
	File				testFile(File::getCurrentWorkingDirectory().getChildFile(String(filePath)));

	if (testFile.exists())
		testFile.deleteFile();
	FileOutputStream	file(testFile);

	_midiBuff.writeTo(file, 1);
	//file.write(_midi.getMidiArray(), _midi.getMidiSize());
}

void MidiManager::setTempo(const int bpm, double time)
{
	MidiMessage message = MidiMessage::tempoMetaEvent(bpm);

	message.setTimeStamp(time);
	_midiSequence.addEvent(message);
}

void MidiManager::changeInstrument(const int channel, const int instrumentNb, double time)
{
	MidiMessage message = MidiMessage::programChange(channel, instrumentNb);

	message.setTimeStamp(time);
	_midiSequence.addEvent(message);
}

String		MidiManager::getMidiMessageDescription(const MidiMessage& m)
{
	if (m.isNoteOn())           return "Note on " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3);
	if (m.isNoteOff())          return "Note off " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3);
	if (m.isProgramChange())    return "Program change " + String(m.getProgramChangeNumber());
	if (m.isPitchWheel())       return "Pitch wheel " + String(m.getPitchWheelValue());
	if (m.isAftertouch())       return "After touch " + MidiMessage::getMidiNoteName(m.getNoteNumber(), true, true, 3) + ": " + String(m.getAfterTouchValue());
	if (m.isChannelPressure())  return "Channel pressure " + String(m.getChannelPressureValue());
	if (m.isAllNotesOff())      return "All notes off";
	if (m.isAllSoundOff())      return "All sound off";
	if (m.isMetaEvent())        return "Meta event";

	if (m.isController())
	{
		String name(MidiMessage::getControllerName(m.getControllerNumber()));

		if (name.isEmpty())
			name = "[" + String(m.getControllerNumber()) + "]";

		return "Controller " + name + ": " + String(m.getControllerValue());
	}

	return String::toHexString(m.getRawData(), m.getRawDataSize());
}

void	MidiManager::addMessageToList(const MidiMessage& message)
{
    const double time = message.getTimeStamp();
    const int hours   = ((int) (time / 3600.0)) % 24;
    const int minutes = ((int) (time / 60.0)) % 60;
    const int seconds = ((int) time) % 60;
    const int millis  = ((int) (time * 1000.0)) % 1000;
    const String timecode (String::formatted ("%02d:%02d:%02d.%03d",
                                              hours,
                                              minutes,
                                              seconds,
                                              millis));
	File file(File::getCurrentWorkingDirectory().getChildFile(String("./test.log")));

	FileLogger test(file, "COUCOU", 4096);

	test.writeToLog(timecode + "  -  " + getMidiMessageDescription(message));
}

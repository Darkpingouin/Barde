/*
  ==============================================================================

    Core.h
    Created: 6 Mar 2017 11:21:32am
    Author:  Anthony

  ==============================================================================
*/

#ifndef CORE_HH_INCLUDED
#define CORE_HH_INCLUDED

#include "JuceHeader.h"
#include "GraphManager/JuceManager.hh"
#include "MidiManager/MidiManager.hh"
#include "AI/MusicGenerator.hh"

class Core : public JUCEApplication
{
public:
	Core();
	~Core();

	int launch(void);

	void initialise(const String & commandLine) override;
	void shutdown() override;
	void systemRequestedQuit() override;
	void anotherInstanceStarted(const String & commandLine) override;

	const String getApplicationName() override;
	const String getApplicationVersion() override;
	bool moreThanOneInstanceAllowed() const;

	
private:
	IGraphManager	*_graph;
};



#endif  // CORE_HH_INCLUDED
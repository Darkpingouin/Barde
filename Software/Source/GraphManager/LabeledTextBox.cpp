/*
  ==============================================================================

    LabeledTextBox.cpp
    Created: 25 May 2018 7:00:31pm
    Author:  Anthony

  ==============================================================================
*/

#include "LabeledTextBox.hh"

LabeledTextBox::LabeledTextBox()
{
	GuiFactory::initLegendLabel("", _label);

	_labelItem = GuiFactory::createFlexItem(_label, 100, 20, FlexItem::AlignSelf::autoAlign, 1);

	GuiFactory::initTextEditor(_textBox);

	_textItem = GuiFactory::createFlexItem(_textBox, 200, 17, FlexItem::AlignSelf::autoAlign, 1);

	GuiFactory::initVerticalFlexGroup({ _labelItem, _textItem }, *this);
}

void LabeledTextBox::setLabelText(const std::string & text)
{
	_label.setLabelText(text);
	_labelItem = GuiFactory::createFlexItem(_label, 100, 20);
	refreshItems( { _labelItem, _textItem } );
}

std::string LabeledTextBox::getText() const
{
	return _textBox.getText().toStdString();
}

void LabeledTextBox::setText(const std::string & text)
{
	_textBox.setText(text);
}

void LabeledTextBox::setPasswordCharacter(juce::juce_wchar passwordCharacter)
{
	_textBox.setPasswordCharacter(passwordCharacter);
}

void LabeledTextBox::setTextBoxColour(int colourID, Colour color)
{
	_textBox.setColour(colourID, color);
}


void LabeledTextBox::paint(Graphics &g)
{
	//g.setColour(Colour(Theme::getInstance().getButtonColor()));
	//g.fillRoundedRectangle(0.f, 0.f, this->getWidth(), this->getHeight(), 10.f);
	//Text
	//g.setColour(Colour(Theme::getInstance().getButtonFontColor()));
	//g.setFont(14.0f);
	//g.drawText(this->getName(), 0, 0, this->getWidth(), this->getHeight(), Justification::centredLeft, true);
}
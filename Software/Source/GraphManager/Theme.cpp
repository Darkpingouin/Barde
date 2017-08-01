/*
  ==============================================================================

    Theme.cpp
    Created: 15 Jul 2017 2:22:21pm
    Author:  Oreo

  ==============================================================================
*/

#include "Theme.h"



Theme::Theme()
{
	_buttonColor = 0;
	_backgroundColor = 0;
	_fontColor = 0;
	_name = "";
}

Theme::Theme(int buttonColor, int backgroundColor, int fontColor, std::string name)
{
	_buttonColor = buttonColor;
	_backgroundColor = backgroundColor;
	_fontColor = fontColor;
	_name = name;
}


Theme::~Theme()
{

}

int Theme::getButtonColor()
{
	return (_buttonColor);
}

int Theme::getBackgroundColor()
{
	return (_backgroundColor);
}

int Theme::getFontColor()
{
	return (_fontColor);
}

std::string Theme::getName()
{
	return (_name);
}

void Theme::setButtonColor(int color)
{
	_buttonColor = color;
}

void Theme::setBackgroundColor(int color)
{
	_backgroundColor = color;
}

void Theme::setFontColor(int color)
{
	_fontColor = color;
}

void Theme::setName(std::string name)
{
	_name = name;
}
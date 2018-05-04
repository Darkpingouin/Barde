/*
  ==============================================================================

    MusicStyleButton.h
    Created: 14 Mar 2017 3:21:14pm
    Author:  Oreo

  ==============================================================================
*/

#ifndef MUSICSTYLEBUTTON_H_INCLUDED
#define MUSICSTYLEBUTTON_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "../Player.hh"
#include "Theme.h"
#include "../UserSettings.h"

/*! \class MusicStyleButton
* \brief classe representing a button for a specific music style
*
*  This class generates a music style button
*/

#include <thread>
#include <mutex>
class MusicStyleButton : public Button
{
public:
	int width; /*!< Button width*/
	int height; /*!< Button height*/
	Theme theme; /*!< Theme of the app*/
	std::thread _threadPlayer; /*!< thread player*/
	Player _player; /*!< player*/
	UserSettings *us;

	/*!
	*  \brief Constructor
	*
	*  MusicStyleButton class constructor
	*
	*  \param buttonName : name of the button / Text to display
	*  \param w : Button width
	*  \param h : Button height
	*  \param theme : Theme
	*/
	MusicStyleButton(const String &buttonName, const int w, const int h, Theme theme, UserSettings *us);
	/*!
	*  \brief Destructor
	*
	*  MusicStyleButton class destructor
	*/
	~MusicStyleButton();
	
	/*!
	*  \brief Diplay of the button
	*
	*  Function that diplays the button and change with some events
	*
	*  \param g : graphic where the button is diplayed
	*  \param isMouseOverButton : boolean corresponding to the mouse over button event
	*  \param isButtonDown :boolean corresponding to the button down event
	*/
	void paintButton(Graphics& g, const bool isMouseOverButton, const bool isButtonDown);
};

#endif  // MUSICSTYLEBUTTON_H_INCLUDED

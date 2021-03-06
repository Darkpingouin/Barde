/*
  ==============================================================================

    Theme.h
    Created: 15 Jul 2017 2:22:21pm
    Author:  Oreo

  ==============================================================================
*/

#ifndef THEME_H_INCLUDED
#define THEME_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>

#include "../Utils/NonCopyable.hpp"


/*! \class Theme
* \brief class used for the themes of the software
*
*  Used to define the different aspects of the software like:
*  - BackgroundColor
*  - ButtonColor
*  - FontColor
*/
class Theme : public NonCopyable
{
public:






	/*!
	*  \brief Destructor
	*
	*  Theme Destructor
	*
	*/
	~Theme();

	/*!
	*  \brief button color getter
	*
	*  gets the color of the buttons of the theme
	*
	*  \return the button color
	*/
	int getButtonColor();

	/*!
	*  \brief background color getter
	*
	*  gets the backgroudn color of the theme
	*
	*  \return the background color
	*/
	int getBackgroundColor();

	/*!
	*  \brief font color getter
	*
	*  gets the font color of the theme
	*
	*  \return the font color
	*/
	int getFontColor();

	/*!
	*  \brief button font color getter
	*
	*  gets the button font color of the theme
	*
	*  \return the button font color
	*/
	int getButtonFontColor();

	int getSliderOnColor();

	int getSliderOffColor();

	int getSliderPointerColor();

	int getClueColor();

	int getErrorTextColor();



	/*!
	*  \brief name getter
	*
	*  gets the name of the theme
	*
	*  \return the name
	*/
	std::string getName();

	/*!
	*  \brief button color setter
	*
	*  sets the button color
	*
	*  \param color : color of the button
	*/
	void setButtonColor(int color);

	/*!
	*  \brief background color setter
	*
	*  sets the background color
	*
	*  \param color : color of the background
	*/
	void setBackgroundColor(int color);

	/*!
	*  \brief font color setter
	*
	*  sets the font color
	*
	*  \param color : color of the font
	*/
	void setFontColor(int color);


	/*!
	*  \brief button font color setter
	*
	*  sets the button font color
	*
	*  \param color : color of the button font
	*/
	void setButtonFontColor(int color);

	void setSliderOnColor(int color);

	void setSliderOffColor(int color);

	void setSliderPointerColor(int color);

	void setClueColor(int color);

	void setErrorTextColor(int color);



	/*!
	*  \brief name setter
	*
	*  sets the name of the theme
	*
	*  \param name : name of the theme
	*/
	void setName(const std::string &name);

	static Theme &getInstance();

	/*!
	*  \brief creates Theme from file
	*
	*  creates a Theme with the theme settings located in the settings file.
	*
	*  \param filename : name of the file where the theme settings are defined
	*
	*/
	void parseTheme(const std::string &fileName);

private:
	int _buttonColor; /*!< color of all buttons in the software */
	int _backgroundColor; /*!< background color of the software */
	int _fontColor; /*!< fontcolor of the software */
	int _buttonFontColor; /*!< color of the font of the buttons*/
	int _sliderOnColor;
	int _sliderOffColor;
	int _sliderPointerColor;
	int _clueColor;
	int _errorTextColor;
	std::string _name; /*!< name of the theme */

	static Theme _theme;

	Theme();

};


#endif  // THEME_H_INCLUDED

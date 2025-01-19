/*
  ** LCDI2C_Azerbaijani_Latin class **
  A LCDI2C_Generic subclass makes Azerbaijani
  as LCD's additional language using customized characters in CGRAM.
  Max 8 customized characters printed at once.

  ** Compatible LCDs **
  Only used for LCD chips with regular ROM (Japanese ROM - the most popular):
  - Hitachi HD44780UA00
  - Wuxi AIP31066
  - Samsung KS0066F00, KS0066F04
  - Jewel Hill SPLC780D1, SPLC063
  - Sitronix ST7066-0A
  - Surenoo SLC Japanese series

  ** Credentials **
  Author:  Nurlan Aliyev 
  Updated: January 19 2025

  ** Azerbaijani tones & diacritics for 5x8 Latin letters (C) 2025 

  ** Help **
  https://github.com/locple/LCDI2C_Multilingual
*/

#ifndef LCDI2C_Azerbaijani_Latin_h
#define LCDI2C_Azerbaijani_Latin_h

#include "LCDI2C_Latin.h"
#include "Custom/Azerbaijani.h"

class LCDI2C_Azerbaijani_Latin : public LCDI2C_Latin {
public:
  LCDI2C_Azerbaijani_Latin(uint8_t lcd_addr, uint8_t lcd_cols, uint8_t lcd_rows)
  : LCDI2C_Latin(lcd_addr, lcd_cols, lcd_rows) {
	//setLongestWordLength(10);
	customizedLanguage = new CustomizedAzerbaijani(static_cast<LCDI2C_UTF8*>(this));
  }
};


#endif  // LCDI2C_Vietnamese_h
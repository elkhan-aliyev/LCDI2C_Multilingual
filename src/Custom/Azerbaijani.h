/*

  {0x018F, 0xB5}, // Ə 
  {0x0259, 0xB6}, // ə
  {0x01E6, 0xB7}, // Ğ
  {0x01E7, 0xB8}, // ğ
  {0x015E, 0xB9}, // Ş
  {0x015F, 0xBA}, // ş
  {0x0131, 0xBB} // ı
*/

/*
  ** Azerbaijani customization data **
  Azerbaijani code points to customized character maps

  ** Credentials **
  Author:  Nurlan Aliyev
  Updated: January 19 2025

  ** Azerbaijani letters & diacritics for 5x8 Latin letters **
  Adapted for Azerbaijani specific letters
*/

#ifndef Custom_Azerbaijani_h
#define Custom_Azerbaijani_h

#include "../base/LCDI2C_Types.h"
#include "../base/LCDI2C_Custom.h"

// List of Azerbaijani letters with custom Unicode characters
const uint8_t AzerbaijaniCustomLetterNum = 7; // Adjust based on the number of custom characters
CustomCharacterType AzerbaijaniCustomLetters[AzerbaijaniCustomLetterNum] = {
    {0x018F, {0b01111010, 0b10001001, 0b10001001, 0b10001001, 0b01111110}}, // Ə (LATIN CAPITAL LETTER SCHWA)
    {0x0259, {0b01101000, 0b10100100, 0b10100100, 0b10100100, 0b01111000}}, // ə (LATIN SMALL LETTER SCHWA)
    {0x0047, {0b01111101, 0b10000010, 0b10010010, 0b10010010, 0b01110101}}, // Ğ (Example custom glyph for G)
    {0x01E7, {0b01111101, 0b10000010, 0b10010010, 0b10010010, 0b01110101}}, // ğ (Example custom glyph for G)
    {0x015E, {0b00100010, 0b01000101, 0b11001001, 0b01010001, 0b00100010}}, // Ş 
    {0x015F, {0b00100010, 0b01000101, 0b11001001, 0b01010001, 0b00100010}}, // ş 
    {0x0131, {0b00000000, 0b10001000, 0b11111000, 0b10001000, 0b00000000}} // ı 
};

class CustomizedAzerbaijani : public CustomizedLanguage {
  public:
    CustomizedAzerbaijani(LCDI2C_UTF8* lcd) : CustomizedLanguage(lcd) {
      CustomLetterNum = AzerbaijaniCustomLetterNum;
      CustomLetters = AzerbaijaniCustomLetters;
    }
// alternativləri bura yazmaq lazımdır
}

#endif
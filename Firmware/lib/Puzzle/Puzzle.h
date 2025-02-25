/*
Created By: James Campbell (aka. Soups or Soups71)
Last Updated: 22JUL24
*/

#ifndef Puzzle_h
#define Puzzle_h
#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h>
#include "Cursor.h"
#include "words.h"
#include "string.h"



class Puzzle{
    public:

        Adafruit_ST7735 *screen;
        Cursor currCursor;
        String title;
        int numChoices;
        int currValue;
        String currValString;
        int carrotIdx;
        Puzzle(Adafruit_ST7735 *tftScreen, String usrTitle);


        void printNewGame();
        void printText();
        int moveCarrotRight();
        int moveCarrotLeft();
        int upChoice();
        int downChoice();
        int updateVal(int increase);
        int setw(int width);
        String setw(String inputStr, int width);
        void printWord();
        void clearWord();
        void rc4_init(unsigned char *s, unsigned char *key, int keylen);
        void rc4_crypt(unsigned char *s, unsigned char *data, int datalen);
        int hexCharToInt(char c);
        void hexStringToByteArray(const char* hexString, byte* byteArray, int length);

};
#endif
#ifndef TELEPHONE_CABLE
#define TELEPHONE_CABLE

#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct 
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern const char* MinorColorNames[];
extern const char* MajorColorNames[];
extern int numberOfMajorColors, numberOfMinorColors;
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif

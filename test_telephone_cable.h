#ifndef TEST_TELEPHONE_CABLE
#define TEST_TELEPHONE_CABLE

#include "telephone_cable.h"

extern void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);

#endif


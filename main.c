#include "telephone_cable.h"
#include "test_telephone_cable.h"
#include "telephone_cable_ref_manual.h"
int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    telephone_cable_manual_print();
    return 0;
}

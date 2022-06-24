#include "telephone_cable_ref_manual.h"
#include <stdio.h>
#include <string.h>

void telephone_cable_manual_print();
int spaceToprint(const char* str, int length);

void telephone_cable_manual_print()
{
    printf("**************Reference Manual*********************\n");
    /* printing the heading */
    for(int row = 0; row < numberOfMajorColors; row++)
    {
        printf("%16s",MinorColorNames[row]);
    }
    printf("\n");
    
    /* printing in form of a matrix */
    for(int row = 0; row < numberOfMajorColors; row++)
    {
        for(int col = 0; col < numberOfMinorColors; col++)
        {
            printf("%16d",row*numberOfMinorColors+col + 1);
        }
        printf("%16s",MajorColorNames[row]);
        printf("\n");
    }
}
int spaceToprint(const char* str, int length)
{
    return (length - strlen(str));
}

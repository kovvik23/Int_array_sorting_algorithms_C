/* Kovacs Viktoria */

#include "StandardVisualizer.h"

#include <stdio.h>

#include "../Core/Time.h"

// * - standard, # - compare, @ - swap

void printArrayAndHighlight(int* array, int size, int iHighlight1, int iHighlight2, char highlightChar, int delayTime)
{
    const int consoleCols = 119;//120-1
    const int consoleRows = 30;//31-1

    for(int row = 0; row < consoleRows; row++)
    {
        for(int col = 0; col < consoleCols; col++)
        {
            //Print appropriate number of columns to STDoutput

            if(col >= size) //One column for each integer then new line
            {
                // got to next row
                printf("\n");
                break;
            }

            if(array[col] >= consoleRows - row) //Printing non-space chars
            {
                if(col == iHighlight1 || col == iHighlight2)
                {
                    printf("%c", highlightChar);
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }

        }
    }
    delay(delayTime);//Time.h
}

void printArrayAndHighlightSwap(int* array, int size, int idx1, int idx2)
{
    printArrayAndHighlight(array, size, idx1, idx2, '@', 2000);
}

void printArrayAndHighlightCompare(int* array, int size, int idx1, int idx2)
{
    printArrayAndHighlight(array, size, idx1, idx2, '#', 2000);
}


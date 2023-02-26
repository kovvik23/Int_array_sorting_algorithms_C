/* Kovacs Viktoria */

#include "GnomeSort.h"

#include <stdio.h>
#include "AlgoHelpers.h"

void gnomeSortInt(int array[],
                  int size,
                  void(*swapCallback)(int*, int, int, int),
                  void(*compareCallback)(int*, int, int, int))
{
    int iArr = 0;

    while(iArr < size)
    {
        /*Increment iArr if:
        1) we are at the first element of the array or,
        2) if the current element is greater or equal to the previous one.
        Otherwise swap the current and prev elements and go back one.
        */
        if(iArr == 0)
        {
            iArr++;
        }

        else if(array[iArr] >= array[iArr - 1])
        {
            if(compareCallback != NULL)
            {
                (*compareCallback)(array, size, iArr, iArr-1);
            }
            iArr++;
        }
        else
        {
            if(compareCallback != NULL)
            {
                (*compareCallback)(array, size, iArr, iArr-1);
            }
            swapIndices(array, size, iArr, iArr-1, swapCallback);
            iArr--;
        }
    }
}

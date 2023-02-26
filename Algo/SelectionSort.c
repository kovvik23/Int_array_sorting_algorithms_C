/* Kovacs Viktoria */

#include "SelectionSort.h"

#include <stdio.h>
#include "AlgoHelpers.h"

void selectionSortInt(int array[],
                      int size,
                      void(*swapCallback)(int*, int, int, int),
                      void(*compareCallback)(int*, int, int, int))
{
    int iMin;
    for(int i = 0; i < size-1; i++)
    {
        //Finding the min element in array
        iMin = i;
        for(int j = i+1; j < size; j++)
        {
            if(compareCallback != NULL)
            {
                (*compareCallback)(array, size, i, j);
            }

            if(array[j] < array[iMin])
            {
                iMin = j;
            }
        }

        //Place min element into correct position
        if(iMin != i)
        {
            swapIndices(array, size, iMin, i, swapCallback);
        }
    }
}

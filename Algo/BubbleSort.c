/* Kovacs Viktoria */

#include "BubbleSort.h"

#include <stdio.h>
#include "AlgoHelpers.h"
#include "../Core/Time.h"

void bubbleSortInt(int array[],
                   int size,
                   void(*swapCallback)(int*, int, int, int),//pointer that points to a function
                   void(*compareCallback)(int*, int, int, int))
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(compareCallback != NULL)
            {
                (*compareCallback)(array, size, j, j+1);
            }

            if (array[j] > array[j+1])
            {
                swapIndices(array, size, j, j+1, swapCallback);
            }
        }
    }
}

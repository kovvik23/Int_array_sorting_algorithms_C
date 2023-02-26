/* Kovacs Viktoria */

#include "QuickSort.h"

#include <stdio.h>
#include "AlgoHelpers.h"

int partition(int array[],
              int size,
              int iLow,
              int iHigh,
              void(*swapCallback)(int*, int, int, int),
              void(*compareCallback)(int*, int, int, int))
{
    /*Pivot divides the array into two halves,
    elements in the left half are smaller than pivot,
    elements in the right half are greater than pivot*/

    int pivot = array[iHigh]; //Set pivot as the last element in the array
    int i = (iLow-1); //Index of smaller element in array

    for(int j = iLow; j <= iHigh-1; j++)
    {
        if(compareCallback != NULL)
        {
            (*compareCallback)(array, size, j, iHigh);
        }

        //Current element smaller than pivot
        if(array[j] <= pivot)
        {
            i++;
            //but smaller element cannot be the same as the current element
            if(j != i)
            {
                swapIndices(array, size, i, j, swapCallback);
            }
        }
    }

    //Place pivot in correct position
    if(iHigh != i+1)//don't swap last element with itself
    {
        swapIndices(array, size, (i+1), iHigh, swapCallback);
    }
    return (i+1);
}
void quickSortIntImpl(int array[],
                      int size,
                      int iLow,
                      int iHigh,
                      void(*swapCallback)(int*, int, int, int),
                      void(*compareCallback)(int*, int, int, int))
{
    if(iLow < iHigh)
    {
        //Partition index
        int iPar = partition(array, size, iLow, iHigh, swapCallback, compareCallback);

        //Recursively call quickSortIntImp to sort elements before and after partition
        quickSortIntImpl(array, size, iLow, iPar-1, swapCallback, compareCallback);
        quickSortIntImpl(array, size, iPar+1, iHigh, swapCallback, compareCallback);
    }
}

void quickSortInt(int array[],
                  int size,
                  void(*swapCallback)(int*, int, int, int),
                  void(*compareCallback)(int*, int, int, int))
{
    quickSortIntImpl(array, size, 0, size-1, swapCallback, compareCallback);
}


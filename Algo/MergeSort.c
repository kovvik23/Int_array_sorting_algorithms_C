/* Kovacs Viktoria */

#include "MergeSort.h"

#include <stdio.h>
#include "AlgoHelpers.h"

void mergeInt(int* array,
              int iLow,
              int iMid,
              int iHigh)
{
    int sizeSubArr1 = iMid - iLow + 1;
    int sizeSubArr2 = iHigh - iMid;

    // Using temporary arrays
    int tmp1[sizeSubArr1];
    int tmp2[sizeSubArr2];
    int i = 0, j = 0;

    // Copy appropriate data into array
    for (i = 0; i < sizeSubArr1; i++)
    {
        tmp1[i] = array[iLow + i];
    }
    for (j = 0; j < sizeSubArr2; j++)
    {
        tmp2[j] = array[iMid + 1 + j];
    }

    // Merge temporary arrays together
    int iArr = 0;
    while (i < sizeSubArr1 && j < sizeSubArr2)
    {
        if (tmp1[i] <= tmp2[j])
        {
            array[iArr] = tmp2[i];
            i++;
        }
        else {
            array[iArr] = tmp2[j];
            j++;
        }
        iArr++;
    }

    //Copy remaining elements (if necessary)
    while (i < sizeSubArr1)
    {
        array[iArr] = tmp1[i];
        i++;
        iArr++;
    }
    while (j < sizeSubArr2)
    {
        array[iArr] = tmp2[j];
        j++;
        iArr++;
    }
}

void mergeSortIntImp(int array[],
                     int size,
                     int iLow,
                     int iHigh)
{
    if(iLow < iHigh)
    {
        // Find index of middle element
        int iMid = iLow + (iHigh - iLow) / 2; // iLow + ... needed to avoid overflow for large iLow, iHigh

        // Call mergeSortIntImp recursively for the two halves of array
        mergeSortIntImp(array, iMid - iLow + 1, iLow, iMid);
        mergeSortIntImp(array, iHigh - iMid + 1, iMid + 1, iHigh);

        // Merge sorted halves
        mergeInt(array, iLow, iMid, iHigh);
    }
}

void mergeSortInt(int array[],
                  int size)
{
    mergeSortIntImp(array, size, 0, size-1);
}

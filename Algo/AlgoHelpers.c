/* Kovacs Viktoria */

#include "AlgoHelpers.h"
#include <stdio.h>
#include <stdlib.h>

void swapIndices(int* arrayIn,
                 int size,
                 int i,
                 int j,
                 void(*callback)(int*, int, int, int))
{
    int tmp = arrayIn[i];
    arrayIn[i] = arrayIn[j];
    arrayIn[j] = tmp;

    if(callback != NULL)
    {
        (*callback)(arrayIn, size, i, j);
    }
}

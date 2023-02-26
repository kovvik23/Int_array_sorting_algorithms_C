/* Kovacs Viktoria */

#ifndef ALGOHELPERS_H
#define ALGOHELPERS_H

#include <stdio.h>
#include "BubbleSort.h"

void swapIndices(int* arrayIn,
                 int size,
                 int i,
                 int j,
                 void(*callback)(int*, int, int, int));

#endif //ALGOHELPERS_H

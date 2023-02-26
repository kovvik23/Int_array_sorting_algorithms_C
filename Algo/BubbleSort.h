/* Kovacs Viktoria */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <stdio.h>

void bubbleSortInt(int array[],
                   int size,
                   void(*swapCallback)(int*, int, int, int),
                   void(*compareCallback)(int*, int, int, int));

#endif //BUBBLESORT_H

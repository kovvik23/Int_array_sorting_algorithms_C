/* Kovacs Viktoria */

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <stdio.h>

void selectionSortInt(int array[],
                      int size,
                      void(*swapCallback)(int*, int, int, int),
                      void(*compareCallback)(int*, int, int, int));


#endif //SELECTIONSORT_H

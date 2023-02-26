/* Kovacs Viktoria */

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>

void quickSortInt(int array[],
                  int size,
                  void(*swapCallback)(int*, int, int, int),
                  void(*compareCallback)(int*, int, int, int));

#endif //QUICKSORT_H

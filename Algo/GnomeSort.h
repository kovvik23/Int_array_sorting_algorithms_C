/* Kovacs Viktoria */

#ifndef GNOMESORT_H
#define GNOMESORT_H

#include <stdio.h>

void gnomeSortInt(int array[],
                  int size,
                  void(*swapCallback)(int*, int, int, int),
                  void(*compareCallback)(int*, int, int, int));

#endif //GNOMESORT_H

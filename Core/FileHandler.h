/* Kovacs Viktoria */

#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>

void writeArrayFromFile(const char* fileName, int outputArray[], int outSize); // ", " as separator
void readArrayFromFile(const char* fileName, int* outputArray[], int* outSize); // ", " as separator
int countCommas(const char* fileName);

#endif //FILE_HANDLER_H

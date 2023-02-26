#include "FileHandler.h"
#include <stdlib.h>

void writeArrayFromFile(const char* fileName, int outputArray[], int outSize)
{
    FILE* fp;
    fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        perror("Couldn't open file for writing");
    }
    for (int i = 0; i < outSize-1; i++)
    {
        fprintf(fp, "%d, ", outputArray[i]);
    }
    fprintf(fp, "%d", outputArray[outSize-1]);
    fclose(fp);
}

int countCommas(const char* fileName)
{
    FILE *fp;
    fp = fopen(fileName, "r");
    if(fp == NULL)
    {
        perror("Error couldn't open file.");
    }

    int numCommas = 0;
    char ch;
    // Count commas
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == ',')
        {
            numCommas++;
        }
    }
    fclose(fp);
    return numCommas;
}

void readArrayFromFile(const char* fileName, int* outputArray[], int* outSize)
{
    int size = countCommas(fileName) + 1;
    (*outSize) = size;
    (*outputArray) = (int*) malloc(sizeof(int) * size);

    FILE *fp;
    fp = fopen(fileName, "r");
    if(fp == NULL)
    {
        perror("Error couldn't open file.");
    }

    for(int i = 0; i < size - 1; i++)
    {
        fscanf(fp, "%d, ", &(*outputArray)[i]);
    }
    fscanf(fp, "%d", &(*outputArray)[size - 1]); // last element

    fclose(fp);
}

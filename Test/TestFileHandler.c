/* Kovacs Viktoria*/

#include "TestFileHandler.h"
#include <stdio.h>
#include <stdlib.h>
#include "../Core/FileHandler.h"
#include "../Core/ArrayHelpers.h"

void testCountCommas()
{
    char file[] = "Generated/dummyIntArray.txt";
    int expectedResult = 4;
    int actualResult = countCommas(file);
    if(actualResult != expectedResult)
    {
        perror("testCountCommas failed, expected result\n");
    }
    printf("testCountCommas succeeded!\n");
    printf("    result = %d\n", actualResult);
}

void testReadArrayFromFile()
{
    char file[] = "Generated/dummyIntArray.txt";
    int expectedSize = 5;
    int expectedResult[] = {1, 3, 5, 4, 2};
    int* actualResult = NULL;
    int actualSize;
    readArrayFromFile(file, &actualResult, &actualSize);

    if(actualSize != expectedSize)
    {
        perror("testReadArrayFromFile failed, array size differs from expected");
    }
    for(int i = 0; i < expectedSize; i++)
    {
        if(actualResult[i] != expectedResult[i])
        {
            perror("testReadArrayFromFile failed, array values differ");
        }
    }

    printf("testReadArrayFromFile succeeded!\n");
    printf("    result = [");
    for(int i = 0; i < actualSize-1; i++)
    {
        printf("%d, ",actualResult[i]);
    }
    printf("%d]\n",actualResult[actualSize-1]);
    free(actualResult);
}

void testWriteArrayFromFile()
{
    char file[] = "Generated/dummyIntArray2.txt";
    int testSize = 5;
    int testArray[] = {1, 2, 3, 4, 5};

    writeArrayFromFile(file, testArray, testSize);
    printf("testWriteArrayFromFile succedded\n");
    printf("    restult at: %s", file);
}

void testWriteReadArrayToFile()
{
    char file[] = "Generated/dummyIntArray3.txt";
    int testSize1 = 5;
    int testArray1[] = {5, 4, 3, 2, 1};
    int testSize2;
    int* testArray2 = NULL;

    writeArrayFromFile(file, testArray1, testSize1);
    readArrayFromFile(file, &testArray2, &testSize2);

    if(testSize1 != testSize2)
    {
        perror("testWriteReadArrayToFile failed, array size differs from expected");
    }
    for(int i = 0; i < testSize1; i++)
    {
        if(testArray1[i] != testArray2[i])
        {
            perror("testWriteReadArrayToFile failed, array values differ");
        }
    }
    printf("\ntestReadArrayFromFile succeeded!\n");
    printf("    result = [");
    for(int i = 0; i < testSize2-1; i++)
    {
        printf("%d, ",testArray2[i]);
    }
    printf("%d]\n", testArray2[testSize2-1]);
    free(testArray2);
}

void TestFileRead()
{
    testCountCommas();
    testReadArrayFromFile();
    testWriteArrayFromFile();
    testWriteReadArrayToFile();
}

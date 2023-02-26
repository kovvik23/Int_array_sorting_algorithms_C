/*Kovacs Viktoria*/

#include "ArrayHelpers.h"

#include <stdio.h>
#include <stdlib.h>

int* randomArrayGenerator(int size)
{
    // Dynamic memory allocation
    int* array = (int*) malloc(size * sizeof(int));

    // Seed random number generator
    srand(0);

    // Fill array with random numbers
    for(int i = 0; i < size; i++)
    {
        array[i] = rand() % 10; //Random numbers must be integers
    }

    return array;
}

// Check if the size entered by the user is valid, i.e. isn't negative or char
int checkSize()
{
    int size = 0;
    int next;
    while(true)
    {
        if(scanf("%d", &size) < 0 ||  //Don't accept non-numeric values
           size < 0 ||  //Don't accept negative numbers
           ((next = getchar()) != EOF && next != '\n')) //Don't accept positive nums followed by non-numeric chars
        {
            clearerr(stdin); //Clear std input of buffered characters
            do
                next = getchar();
            while (next != EOF && next != '\n');
            clearerr(stdin);
            printf("\nRead-in unsuccessful. Please try again and enter a positive integer!\n");
        }
        else
        {
            break;
        }
    }
    return size;
}


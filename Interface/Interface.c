/* Kovacs Viktoria */

#include "Interface.h"

#include <stdio.h>
#include <stdlib.h>

#include "../Test/TestAll.h"
#include "../Visualization/StandardVisualizer.h"
#include "../Algo/BubbleSort.h"
#include "../Algo/QuickSort.h"
#include "../Algo/SelectionSort.h"
#include "../Algo/GnomeSort.h"
#include "../Algo/MergeSort.h"
#include "../Core/Time.h"
#include "../Core/FileHandler.h"
#include "../Core/ArrayHelpers.h"

int userSelectArrayLength()
{
    printf("\nThe array will be filled with random integers. Keep in mind that the size must be less than 119.\n"
           "Please enter what size array you want to sort:\n size = ");
    int size = checkSize();
    /* The sorting algorithm has to fit to the console (size < 120),
     * and have more than two columns to compare (2 <= size).
     * ==>     2 <= size <= 119 */
    while(size > 119 || size <= 1)
    {
        printf("\nYou've entered an invalid size (%d), please enter a valid size.\n", size);
        size = checkSize();
        break;
    }
    return size;
}

void runVisualizerTool()
{
    while(true)
    {
        whichVisualizer sort = userSelectVisualizerSort();
        switch(sort)
        {
        case whichVisualizer::SelectionSort_whichVisualizer:
        {
            //random array generation with array size chosen by user
            int size = userSelectArrayLength();
            int* array = randomArrayGenerator(size);
            //algo visualization
            selectionSortInt(array, size, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
            free(array);
            break;
        }
        case whichVisualizer::BubbleSort_whichVisualizer:
        {
            //random array generation with array size chosen by user
            int size = userSelectArrayLength();
            int* array = randomArrayGenerator(size);
            //algo visualization
            bubbleSortInt(array, size, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
            free(array);
            break;
        }
        case whichVisualizer::QuickSort_whichVisualizer:
        {
            //random array generation with array size chosen by user
            int size = userSelectArrayLength();
            int* array = randomArrayGenerator(size);
            //algo visualization
            quickSortInt(array, size, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
            free(array);
            break;
        }
        case whichVisualizer::GnomeSort_whichVisualizer:
        {
            //random array generation with array size chosen by user
            int size = userSelectArrayLength();
            int* array = randomArrayGenerator(size);
            //algo visualization
            gnomeSortInt(array, size, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
            free(array);
            break;
        }
        case whichVisualizer::Quit_whichVisualizer:
        {
            exit(0);
        }
        default: //Invalid
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
}

whichVisualizer userSelectVisualizerSort()
{
    whichVisualizer sort = whichVisualizer::Invalid_whichVisualizer;
    while(sort ==  whichVisualizer::Invalid_whichVisualizer)
    {
        int response;
        printf("\nSelect which sorting algorithm you want to use:\n [0] Selection sort;\n"
               " [1] Bubble sort;\n [2] Quick sort;\n [3] Gnome sort;\n [4] Quit.\n\n");
        scanf("%d", &response);

        switch(response)
        {
        case 0:
        {
            sort = whichVisualizer::SelectionSort_whichVisualizer;
            break;
        }
        case 1:
        {
            sort = whichVisualizer::BubbleSort_whichVisualizer;
            break;
        }
        case 2:
        {
            sort = whichVisualizer::QuickSort_whichVisualizer;
            break;
        }
        case 3:
        {
            sort = whichVisualizer::GnomeSort_whichVisualizer;
            break;
        }
        case 4:
        {
            sort = whichVisualizer::Quit_whichVisualizer;
            break;
        }
        default:
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
    return sort;
}


void runFileSortTool()
{
    while(true)
    {
        whichFileSort sort = userSelectFileSort();
        switch(sort)
        {
        case whichFileSort::SelectionSort_whichFileSort:
        {
            char* fileName = userSelectFilePath(); //file access
            int* outputArray = NULL;
            int outputSize;
            readArrayFromFile(fileName, &outputArray, &outputSize);
            selectionSortInt(outputArray, outputSize, NULL, NULL);
            writeArrayFromFile(fileName, outputArray, outputSize);
            free(outputArray);
            free(fileName);
            break;;
        }
        case whichFileSort::BubbleSort_whichFileSort:
        {
            char* fileName = userSelectFilePath(); //file access
            int* outputArray = NULL;
            int outputSize;
            readArrayFromFile(fileName, &outputArray, &outputSize);
            bubbleSortInt(outputArray, outputSize, NULL, NULL);
            writeArrayFromFile(fileName, outputArray, outputSize);
            free(outputArray);
            free(fileName);
            break;
        }
        case whichFileSort::QuickSort_whichFileSort:
        {
            char* fileName = userSelectFilePath(); //file path
            int* outputArray = NULL;
            int outputSize;
            readArrayFromFile(fileName, &outputArray, &outputSize);
            quickSortInt(outputArray, outputSize, NULL, NULL);
            writeArrayFromFile(fileName, outputArray, outputSize);
            free(outputArray);
            free(fileName);
            break;
        }
        case whichFileSort::GnomeSort_whichFileSort:
        {
            char* fileName = userSelectFilePath(); //file path
            int* outputArray = NULL;
            int outputSize;
            readArrayFromFile(fileName, &outputArray, &outputSize);
            gnomeSortInt(outputArray, outputSize, NULL, NULL);
            writeArrayFromFile(fileName, outputArray, outputSize);
            free(outputArray);
            free(fileName);
            break;
        }
        case whichFileSort::MergeSort_whichFileSort:
        {
            char* fileName = userSelectFilePath(); //file path
            int* outputArray = NULL;
            int outputSize;
            readArrayFromFile(fileName, &outputArray, &outputSize);
            mergeSortInt(outputArray, outputSize); // diff parameters than others'
            writeArrayFromFile(fileName, outputArray, outputSize);
            free(outputArray);
            free(fileName);
            break;
        }
        case whichFileSort::Quit_whichFileSort:
        {
            exit(0);
        }
        default: //Invalid
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
}

whichFileSort userSelectFileSort()
{
    whichFileSort sort = whichFileSort::Invalid_whichFileSort;
    while(sort ==  whichFileSort::Invalid_whichFileSort)
    {
        int response;
        printf("\nSelect which sorting algorithm you want to use:\n [0] Selection sort;\n"
               " [1] Bubble sort;\n [2] Quick sort;\n [3] Gnome sort;\n [4] Merge sort;\n [5] Quit.\n\n");
        scanf("%d", &response);

        switch(response)
        {
        case 0:
        {
            sort = whichFileSort::SelectionSort_whichFileSort;
            break;
        }
        case 1:
        {
            sort = whichFileSort::BubbleSort_whichFileSort;
            break;
        }
        case 2:
        {
            sort = whichFileSort::QuickSort_whichFileSort;
            break;
        }
        case 3:
        {
            sort = whichFileSort::GnomeSort_whichFileSort;
            break;
        }
        case 4:
        {
            sort = whichFileSort::MergeSort_whichFileSort;
            break;
        }
        case 5:
        {
            sort = whichFileSort::Quit_whichFileSort;
            break;
        }
        default:
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
    return sort;
}

void runSortingTool()
{
    while(true)
    {
        whichFeature feature = userSelectFeature();
        switch(feature)
        {
        case whichFeature::SortFile_whichFeature:
        {
            runFileSortTool();
            break;
        }
        case whichFeature::VisualizeSort_whichFeature:
        {
            runVisualizerTool();
            break;
        }
        case whichFeature::Quit_whichFeature:
        {
            exit(0);
        }
        default: //Invalid
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
}


whichFeature userSelectFeature()
{
    whichFeature feature = whichFeature::Invalid_whichFeature;
    while(feature ==  whichFeature::Invalid_whichFeature)
    {
        int response;
        printf("Select what you want to do (type in the appropriate number):\n [0] Sort array from a file;\n"
               " [1] Visualize a sorting algorithm with random numbers;\n [2] Quit.\n\n");
        scanf("%d", &response);

        switch(response)
        {
        case 0:
        {
            feature = whichFeature::SortFile_whichFeature;
            break;
        }
        case 1:
        {
            feature = whichFeature::VisualizeSort_whichFeature;
            break;
        }
        case 2:
        {
            feature = whichFeature::Quit_whichFeature;
            break;
        }
        default:
        {
            printf("Error. Invalid input, please make a valid choice.\n");
        }
        }
    }
    return feature;
}

char* userSelectFilePath()
{
    char* fileName = (char*) malloc(200 * sizeof(int));;
    printf("Enter the file path: ");
    scanf("%s", fileName);
    printf("\n%s\n", fileName);
    return fileName;
}

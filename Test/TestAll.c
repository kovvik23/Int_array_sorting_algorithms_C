/* Kovacs Viktoria */

#include "testAll.h"

#include "../Visualization/StandardVisualizer.h"
#include "../Algo/BubbleSort.h"
#include "../Algo/QuickSort.h"
#include "../Algo/SelectionSort.h"
#include "../Algo/GnomeSort.h"
#include "../Core/Time.h"

/* Algo tests */

// Testing bubble sort with visualization (bar chart) to standard output
void testBubblesortWithStandardVisualizer()
{
    int myArray[6] = {3, 4, 2, 11, 5, 2};
    bubbleSortInt(myArray, 6, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
}

void testQuicksortWithStandardVisualizer()
{
    int myArray[6] = {3, 4, 2, 11, 5, 2};
    quickSortInt(myArray, 6, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
}

void testSelectionsortWithStandardVisualizer()
{
    int myArray[6] = {3, 4, 2, 11, 5, 2};
    selectionSortInt(myArray, 6, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
}

void testGnomesortWithStandardVisualizer()
{
    int myArray[6] = {3, 4, 2, 11, 5, 2};
    gnomeSortInt(myArray, 6, &printArrayAndHighlightSwap, &printArrayAndHighlightCompare);
}

void testAlgo()
{
    testBubblesortWithStandardVisualizer();
    delay(1500);//ms
    testQuicksortWithStandardVisualizer();
    delay(1500);//ms
    testSelectionsortWithStandardVisualizer();
    delay(1500);
    testGnomesortWithStandardVisualizer();
}

// Visualizer tests
void testStandardVisualizer()
{
    int myArray[6] = {1, 2, 3, 4, 5, 6};
    printArrayAndHighlightSwap(myArray, 6, 0, 1);
    printArrayAndHighlightCompare(myArray, 6, 0, 1);
}

void testVisualizer()
{
    testStandardVisualizer();
}

//Final test for both
void testAll()
{
    testVisualizer();
    delay(5000); //5s
    testAlgo();
}

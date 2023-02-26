/* Kovacs Viktoria */

#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h>

typedef enum whichFeature
{
    Invalid_whichFeature = 0,
    SortFile_whichFeature,
    VisualizeSort_whichFeature,
    Quit_whichFeature
} whichFeature;

struct WhichFeature
{
    whichFeature Invalid_whichFeature;
    whichFeature SortFile_whichFeature;
    whichFeature VisualizeSort_whichFeature;
    whichFeature Quit_whichFeature;
};

typedef enum whichVisualizer
{
    Invalid_whichVisualizer = 0,
    SelectionSort_whichVisualizer,
    BubbleSort_whichVisualizer,
    QuickSort_whichVisualizer,
    GnomeSort_whichVisualizer,
    Quit_whichVisualizer
} whichVisualizer;

struct WhichVisualizer
{
    whichVisualizer Invalid_whichVisualizer;
    whichVisualizer SelectionSort_whichVisualizer;
    whichVisualizer BubbleSort_whichVisualizer;
    whichVisualizer QuickSort_whichVisualizer;
    whichVisualizer GnomeSort_whichVisualizer;
    whichVisualizer Quit_whichVisualizer;
};

typedef enum whichFileSort
{
    Invalid_whichFileSort = 0,
    SelectionSort_whichFileSort,
    BubbleSort_whichFileSort,
    QuickSort_whichFileSort,
    GnomeSort_whichFileSort,
    MergeSort_whichFileSort,
    Quit_whichFileSort
} whichFileSort;


struct WhichFileSort
{
    whichFileSort Invalid_whichFileSort;
    whichFileSort SelectionSort_whichFileSort;
    whichFileSort BubbleSort_whichFileSort;
    whichFileSort QuickSort_whichFileSort;
    whichFileSort GnomeSort_whichFileSort;
    whichFileSort MergeSort_whichFileSort;
    whichFileSort Quit_whichFileSort;
};



void runSortingTool(); // function to run in main
void runFileSortTool();
void runVisualizerTool();

whichFeature userSelectFeature(); // 1. step - feature selection (file sort or visualizer sort)

whichFileSort userSelectFileSort(); // 1.1 Algorithm selection
char* userSelectFilePath(); // 1.1.1 File access

whichVisualizer userSelectVisualizerSort(); // 1.2 Algorithm selection
int userSelectArrayLength(); // 1.2.1 Random array size and generation

#endif //INTERFACE_H

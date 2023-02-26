# Integer array sorting algorithms in C

## About the project

This program uses sorting algorithms on integer arrays read in from files. It can also visualize the sorting algorithms in the console window.

The integer array can be sorted by the following algorithms:
* selection sort
* bubble sort,
* quick sort,
* gnome sort,
* merge sort.

Visualisation is by bar charts displayed to the console window. The number of bars, i.e. elements is entered by the user. The array is then filled with random positive integers. 

## How to use 

### To clone the project
You will need [Git](https://git-scm.com/) to clone this project.

1. Open Terminal.

2. Change the current working directory to the location where you want the cloned directory.

3. Type `git clone` and then the following URL
```
https://github.com/kovvik23/Int_array_sorting_algorithms_C.git
```

CHANGE!
  Then, before running the program use GCC to compile the program and make it executable `gcc main.c -o main`

  Now you can just go to the folder where you saved the program and run main `./main`


## Possible error messages

## Specification
### Input

  _response_: int - allows numerical selection in the program's functions
  
<ins>When reading in a file</ins>

  _file_: array - its elements are characters. (Stores the path for reading in and writing files. This is how the program accesses the unsorted array.)

<ins>Visualization</ins>
  
  _size_: int - the size of the array consisting of random int elements.
  
### Output

<ins>When reading in a file</ins>

  _outputArray_: array - with sorted integer elements. It is written to the same file path which is provided for read in.

<ins>Visualization</ins>

  Dispayed to the console window.


## Structure of the code
**Project**
- Algo
  - AlgoHelpers.c
  - BubbleSort.c
  - GnomeSort.c
  - MergeSort.c
  - QuickSort.c
  - SelectionSort.c
- Core
  - ArrayHelpers.c
  - FileHandler.c
  - Time.c
- Interface
  - Interface.c
- Test
  - TestAll.c
  - TestFileHandler.c
- Visualization
  - StandardVisualizer.c
- main.c 

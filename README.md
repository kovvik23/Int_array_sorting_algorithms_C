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

### To run the project
For the time being, I haven't created a `make` file for this project so I recommend using an IDE to compile, assemble and run it.

# To navigate the functions
The options will be displayed to the screen. Use the relevant number keys on the keyboard to specify what you want to do.

  For example
  
  <img src="https://user-images.githubusercontent.com/63119059/221648567-d5bc3285-6f43-4409-8a46-ab5d4b794e8b.png" width=50% height=50%>
  
  For example, here pressing "1" will start the visualization functionality of the program whereas pressing "2" will quit it. Pressing any other character (i.e. not "0", "1" or "2" )will result in an error message being dislayed to the screen.

  

## Possible error messages

| Error message | Meaning | Solution |
| ----------- | ----------- | ----------- |
| *Error. Invalid input, please make a valid choice.*| A different character was inputted and not one of those listed on the screen. | When the options are listed, please press the key that corresponds to your desired choice/ functionality. |
| *Error opening file.* | Reading in of the file was unsuccessful. | Check that you entered the file path correctly and that the file exists then try again. |
| Read-in unsuccessful. Please try again and enter a positive integer! | You did not consider the interval of the possible numbers that can be selected and entered a number outside this range. | Enter a positive integer for the visualisation or an array. |
| *You've entered an invalid size* (*number), *please enter a valid size.* | You did not consider the interval of the possible numbers that can be selected and entered a number outside this range. | The size of the array for the visualisation needs to be between 2 and 119. Select an integer in this range. |

*number - the number indicated above will always be a positive integer that is greater than 119.

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

## Further development and improvement

1. Create a `make` file to help others compile and run this program.
2. Sorting of arrays containing floats/doubles.
3. Allow user to input each array element manually/ via std input.
4. Reading in and writing to different types of files that the user can select.
5. Allow user to change the character (highlight character) that is used for the visualisation.
6. Allow users to input each array element manually/ via std input for visualisation as well, not using random number generator.
7. Implementing a graphical interface for the visualization of the sorting algorithms.

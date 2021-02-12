# Image Filters

This repo contains a program which can apply different filters to an image. The image can be specify or the webcam can be selected. The implemented image filters are:
* Gray scale
* Pencil Sketch
* Cartoonify

<img src="example.gif" width="600" height="373" />

## Dependencies for Running Locally

* cmake >= 2.8
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* OpenCV >= 4.1
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./imageFilters <option>`

`<option>` can be:
* `default`: The program opens an example image to test filters
* `webcam`: Initialize the webcam to apply filters in real time
* `<imagePath>`: The user can indicate a path to a custom image

## Rubric

The following points have been addressed in the rubric:

### README

| Criteria | Meets specifications | Comments |
| -------- | -------------------- | -------- |
| A README with instructions is included with the project | The README is included with the project and has instructions for building/running the project. <br /> <br /> If any additional libraries are needed to run the project, these are indicated with cross-platform installation instructions. <br /> <br />                                                  You can submit your writeup as markdown or pdf |
| The README indicates which project is chosen | The README describes the project you have built. <br /> <br/> The README also indicates the file and class structure, along with the expected behavior or output of the program. |
| The README includes information about each rubric point addressed | The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed. |

### Compiling and Testing

| Criteria | Meets specifications | Comments |
| -------- | -------------------- | -------- |
| The submission must compile and run | The project code must compile and run without errors. |

### Loops, Functions, I/O

| Criteria | Meets specifications | Comments |
| -------- | -------------------- | -------- |
| The project demonstrates an understanding of C++ functions and control structures | A variety of control structures are used in the project <br /> <br /> The project code is clearly organized into functions. | This can be observed in `main.cpp`, `ìnit.cpp`, `display.cpp` and `filter.cpp` |
| The project accepts user input and processes the input | The project accepts input from a user as part of the necessary operation of the program. | This point is apply in `main.cpp`, lines 5 and 16-18 |

### Object Oriented Programming

| Criteria | Meets specifications | Comments |
| -------- | -------------------- | -------- |
| The project uses Object Oriented Programming techniques | The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. | Three class has been implemented `init`, `display` and `filter` |
| Classes use appropriate access specifiers for class members | All class data members are explicitly specified as public, protected, or private. | These can be review in `int.h` lines 10 and 16, `display.h` lines 15 and 20, `filter.h` lines 7 and 14 |
| Classes abstract implementation details from their interfaces | All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways | Shown in `init.h`, `init.cpp`, `display.h`, `display.cpp`, `filter.h` and `filter.cpp` |
| Classes encapsulate behavior | Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions | Shown in `init.h`, `init.cpp`, `display.h`, `display.cpp`, `filter.h` and `filter.cpp` |

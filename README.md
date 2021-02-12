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

The complete rubric can be review [here](https://review.udacity.com/#!/rubrics/2533/view)

The following points have been addressed in the rubric:

* README
  * A README with instructions is included with the project
  * The README indicates which project is chosen
  * The README includes información about each rubric point addressed
* Compiling and Testing
  * The submission must compile and run
* Loops, Functions, I/O
  * The project demostrates an undestanding of C++ functions and control structures: This can be observed in `main.cpp`, `ìnit.cpp`, `display.cpp` and `filter.cpp`
  * The project accepts user input and processes the input: This point is apply in `main.cpp`, lines 5 and 16-18
* Object Oriented Programming
  * The project uses Object Oriented Programming techniques: Three class has been implemented `init`, `display` and `filter`, each with extension `.h` and `.cpp`
  * Classes use appropriate access specifiers for class members: These can be review in `int.h` lines 10 and 16, `display.h` lines 15 and 20, `filter.h` lines 7 and 14
  * Classes abstract implementation details from their interfaces: Shown in `init.h`, `init.cpp`, `display.h`, `display.cpp`, `filter.h` and `filter.cpp`
  * Classes encapsulate behavior: Shown in `init.h`, `init.cpp`, `display.h`, `display.cpp`, `filter.h` and `filter.cpp`

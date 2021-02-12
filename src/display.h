#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#include <opencv2/opencv.hpp>
#include "filter.h"

struct Trackbar {
	std::string name;
	int id;
	int value;
};

class Display {
public:
	Display(std::string windowName);
	void start(cv::Mat image);
	void start();

private:
	std::string _windowName;
	const int _sliderSelectorMax = 3;
	const int _sliderThreshMax = 255;
	cv::Mat _imgDisp;
	Filter filter;
	Trackbar tbarSelector {"Filter selector", 0, 0};
	Trackbar tbarThreshold {"Threshold", 1, 150};
};

#endif
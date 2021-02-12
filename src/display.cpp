#include <iostream>
#include "display.h"

static void callback(int p, void *userData) {}

Display::Display(std::string windowName) { 
	_windowName = windowName;
	cv::namedWindow(_windowName, cv::WINDOW_AUTOSIZE);
	cv::createTrackbar(tbarSelector.name, _windowName, &tbarSelector.value, _sliderSelectorMax, callback, &tbarSelector);
	cv::createTrackbar(tbarThreshold.name, _windowName, &tbarThreshold.value, _sliderThreshMax, callback, &tbarThreshold);
}

void Display::start(cv::Mat image) {
	while(true) {
  	_imgDisp = filter.update(image, tbarSelector.value, tbarThreshold.value);
		cv::imshow(_windowName, _imgDisp);
		//std::cout << "Selector value = " << tbarSelector.value << ", Threshold value = " << tbarThreshold.value << "\n";
		cv::waitKey(5);
	}
}

void Display::start() {
	cv::VideoCapture cap;
	cap.open(0);
	while(true) {
		cap.read(_imgDisp);
		cv::flip(_imgDisp, _imgDisp, 1);
		_imgDisp = filter.update(_imgDisp, tbarSelector.value, tbarThreshold.value);
		cv::imshow(_windowName, _imgDisp);
		//std::cout << "Selector value = " << tbarSelector.value << ", Threshold value = " << tbarThreshold.value << "\n";
		cv::waitKey(5);
	}
}

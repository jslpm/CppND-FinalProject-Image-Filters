#include "init.h"
#include "display.h"
#include <opencv2/opencv.hpp>

Init::Init(std::string option) {
  if (option == "webcam") { _userOption = optionType::opWebcam; }
	else if(option == "default") { _userOption = optionType::opDefault; }
  else { 
		_userOption = optionType::opPath; 
		_userPath = option;
	}
}

optionType Init::getUserOption() { return _userOption; }

std::string Init::printUserOption() {
	switch (_userOption) 	{
		case optionType::opWebcam: return "webcam";
		case optionType::opDefault: return "default: " + _defaultPath;
		default: return "imagePath: " + _userPath;
	}
}

void Init::start() {
	Display display("Image filters");
	switch (_userOption) {
		case optionType::opPath:
			_image = cv::imread(_userPath, cv::IMREAD_COLOR);
			display.start(_image);
			break;
		case optionType::opDefault:
			_image = cv::imread(_defaultPath, cv::IMREAD_COLOR);
			display.start(_image);
			break;
		case optionType::opWebcam:
			display.start();
			break;			
	}
}
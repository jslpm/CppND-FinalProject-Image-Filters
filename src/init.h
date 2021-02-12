#ifndef INIT_H
#define INIT_H

#include <string>
#include <opencv2/opencv.hpp>

enum class optionType { opWebcam, opPath, opDefault };

class Init {
public:
  Init(std::string option);
  optionType getUserOption();
  std::string printUserOption();
  void start();

private:
  optionType _userOption;
  std::string _userPath;
  std::string _defaultPath = "../data/dog.jpg";
	cv::Mat _image;
};

#endif
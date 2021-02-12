#include "filter.h"
#include <opencv2/opencv.hpp>

Filter::Filter() {}

void Filter::grayFilter() {
  cv::cvtColor(_img, _imgGray, cv::COLOR_BGR2GRAY);
}

void Filter::pencilSketchFilter(int th) {
  cv::GaussianBlur(_imgGray, _imgBlurGaussian, cv::Size(3,3), 0, 0, cv::BORDER_DEFAULT);
  cv::Laplacian(_imgBlurGaussian, _imgLaplacian, CV_32F, 1, 1, 0, cv::BORDER_DEFAULT);
  cv::normalize(_imgLaplacian, _imgLaplacian, 0, 255, cv::NORM_MINMAX, CV_8U);
  cv::threshold(_imgLaplacian, _imgSketch, th, 255, cv::THRESH_BINARY_INV);
}

void Filter::cartoonFilter() {
  cv::bilateralFilter(_img, _imgBlurBilateral, 5, 200, 200, cv::BORDER_DEFAULT);
  cv::normalize(_imgSketch, _imgSketchNorm, 0, 1, cv::NORM_MINMAX, CV_8U);
  cv::split(_imgBlurBilateral, _bgr);
  cv::multiply(_imgSketchNorm, _bgr[0], _bgr[0]);
  cv::multiply(_imgSketchNorm, _bgr[1], _bgr[1]);
  cv::multiply(_imgSketchNorm, _bgr[2], _bgr[2]);
  cv::merge(_bgr, 3, _imgCartoon);  		
}

cv::Mat Filter::update(cv::Mat image, int type, int thresh) {
  _img = image;
  switch (type) {
  case 1:
    grayFilter();
    return _imgGray;
    break;
  case 2:
    grayFilter();
    pencilSketchFilter(thresh);
    return _imgSketch;
  case 3:
    grayFilter();
    pencilSketchFilter(thresh);
    cartoonFilter();
    return _imgCartoon;
    break;
  default:
    return _img;
  }
}
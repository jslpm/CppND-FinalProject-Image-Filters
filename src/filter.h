#ifndef FILTER_H
#define FILTER_H

#include <opencv2/opencv.hpp>

class Filter {
	public:
		Filter();
		void grayFilter();
		void pencilSketchFilter(int threshold);
		void cartoonFilter();
		cv::Mat update(cv::Mat image, int type, int threshold);

	private:
		cv::Mat _img;
		cv::Mat _imgGray;
		cv::Mat _imgSketch;
		cv::Mat _imgSketchNorm;
		cv::Mat _imgBlurGaussian;
		cv::Mat _imgBlurBilateral;
		cv::Mat _imgLaplacian;
		cv::Mat _imgCartoon;
		cv::Mat _bgr[3];
};

#endif
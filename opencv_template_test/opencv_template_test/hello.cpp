#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//cv::Mat img = cv::imread("8524487.jpg");
	cv::Mat img(1920, 1080, CV_8UC3);

	unsigned char element = img.elemSize();
	unsigned int size = img.rows * img.cols * element;
	for (int i = 0; i < size; i += 3) {
		img.data[i] = 255;	//B
		img.data[i + 1] = 100;	//G
		img.data[i + 2] = 100;	//R
	}

	namedWindow("image");
	imshow("image", img);
	waitKey(6000);

	return 0;
}
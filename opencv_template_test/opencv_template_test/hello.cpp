#include <iostream>
#include <opencv2/opencv.hpp>
#include "anton_type.h"
using namespace std;
using namespace cv;

double PrintMs(void)
{
	static int16 last = 0;
	int16 cur = getTickCount();

	if (!last) {
		last = cur;
		return 0;
	}
	double res = ((double)(cur - last) / getTickFrequency()) * 1000;
	last = cur;

	return res;
}

int main()
{
	//cv::Mat img = cv::imread("8524487.jpg");
	cv::Mat img(1920, 1080, CV_8UC3);
	uchar element = img.elemSize();
	uint8 size = img.rows * img.cols * element;

	PrintMs();
	for (uint8 i = 0; i < size; i += 3) {
		img.data[i] = 255;	//B
		img.data[i + 1] = 100;	//G
		img.data[i + 2] = 100;	//R
	}
	double time_ms = PrintMs();
	cout << "time_ms = " << time_ms << endl;

	namedWindow("image");
	imshow("image", img);
	waitKey(6000);

	return 0;
}
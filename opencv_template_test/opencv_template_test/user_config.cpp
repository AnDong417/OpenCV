#include "user_config.h"

void Draw::draw_rectanglar(Mat &img)
{
	Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width = 400;
	rect.height = 400;
	rectangle(img, rect, Scalar(0, 255, 0), 2, 8, 0);
	imshow("draw rectanglar", img);
}
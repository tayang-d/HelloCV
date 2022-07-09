#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");		// Mat 객체 생성
	if (img.empty())				// Mat 객체 생성에 실패했을 시에 빈 Mat객체를 반환해서, 체크하는 구간
	{
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");			// Mat 객체를 보기 위해서 창을 연다.
	imshow("image", img);			// 창에 Mat 데이터를 출력합니다.

	waitKey();						// 키 입력을 기다립니다.
	return 0;
}
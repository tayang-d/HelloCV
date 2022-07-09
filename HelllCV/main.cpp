#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");		// Mat ��ü ����
	if (img.empty())				// Mat ��ü ������ �������� �ÿ� �� Mat��ü�� ��ȯ�ؼ�, üũ�ϴ� ����
	{
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");			// Mat ��ü�� ���� ���ؼ� â�� ����.
	imshow("image", img);			// â�� Mat �����͸� ����մϴ�.

	waitKey();						// Ű �Է��� ��ٸ��ϴ�.
	return 0;
}
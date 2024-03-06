#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

// 图像读取 显示 保存
void imageRead();

// 图像矩阵
void matrix();

int main() {
//    imageRead();
    matrix();
    return 0;
}

void imageRead() {
    cv::Mat image;
    image = cv::imread(R"(D:\xrsspace\app\opencv2\test.jpg)",cv::IMREAD_GRAYSCALE);
    if (image.empty()) {
        cout << "can not read image" << endl;
    }
    cv::namedWindow("IMAGE");
    cv::imshow("IMAGE",image);
    cv::imwrite("1.png",image);
    cv::waitKey(0);
}

void matrix() {
    cv::Mat image = cv::imread("C:\\Users\\Administrator\\Desktop\\opencvimage\\test.jpg");
    if (image.empty()) {
        cout << "con not read image" << endl;
    }
    cout << "图像的行数为" << image.rows << endl;
    cout << "图像的列数为" << image.cols << endl;
    cout << "图像的通道数为" << image.channels() << endl;
    cout << "图像的尺寸为" << image.size << endl;

    cv::waitKey(0);
}



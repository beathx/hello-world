#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;


int main()
{
    VideoCapture cap1(0);
	VideoCapture cap2(2);

    cout << "WIDTH: " << cap1.get(CV_CAP_PROP_FRAME_WIDTH) << endl;
    cout << "HEIGHT: " << cap1.get(CV_CAP_PROP_FRAME_HEIGHT) << endl;

    /*
    cap1.set(CV_CAP_PROP_FRAME_WIDTH, 640);
    cap1.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
    cap1.set(CV_CAP_PROP_FPS, 50);

    cap2.set(CV_CAP_PROP_FRAME_WIDTH, 640);
    cap2.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
    cap2.set(CV_CAP_PROP_FPS, 50);
    */

	cv::Mat frame1;
    //frame1.create(720, 640, CV_8UC1);
    	cv::Mat frame2;
	//if(!cap.open(202))
    	//std::cout << "camera error!" << std::endl;
	while(1)
	{
		cap1 >> frame1;
		//frame1.create(640, 480, CV_8UC1);
        	cap2 >> frame2;
		if (frame1.empty() || frame2.empty())
		    break;

		cv::imshow("imleft", frame1);
		cv::imshow("imright", frame2);
		if (cv::waitKey(10) >= 0)
		    break;
	}
}

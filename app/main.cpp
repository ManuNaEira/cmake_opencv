#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

int main(int argc, char** argv) {
    // Initialize a 120x350 matrix of black pixels
    cv::Mat output = cv::Mat::zeros(120, 350, CV_8UC3);

    // Write text on the matrix
    cv::putText(output, "Hello World :)", cv::Point(15, 70), cv::FONT_HERSHEY_PLAIN, 3, cv::Scalar(0, 255, 0), 4);

    // Write the image to the disk
    cv::imwrite("Output.jpg", output);

    return 0;
}

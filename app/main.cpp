#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main(int argc, char** argv) {
    // Create a GUI window named "Output"
    namedWindow("Output", 1);

    // Initialize a 120x350 matrix of black pixels
    Mat output = Mat::zeros(120, 350, CV_8UC3);

    // Write text on the matrix
    putText(output, "Hello World :)", cvPoint(15, 70), FONT_HERSHEY_PLAIN, 3, cvScalar(0, 255, 0), 4);

    // Display the image
    imshow("Output", output);

    // Wait for the user to press any key
    waitKey(0);

    return 0;
}

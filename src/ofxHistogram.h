#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

#include <opencv2/core/core.hpp>

using std::cout;
using std::endl;

class ofxHistogram
{
public:
	std::vector<float> getHistogram(ofxCvGrayscaleImage & img, int numBins);
	std::vector<std::vector<std::vector<float>>> getHistogram3d(ofxCvColorImage & image, int numBins);
	std::vector<std::vector<std::vector<float>>> getHistogram3d(ofImage & img, int numBins);
};

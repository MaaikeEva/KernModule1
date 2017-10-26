#pragma once

#include "ofMain.h"

#define CAM_WIDTH 350
#define CAM_HEIGHT 250

#define MESH_SIZE 10

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofEasyCam cam;
		ofLight light;

		ofVideoGrabber grabber;
		ofIcoSpherePrimitive sphere1;
		ofIcoSpherePrimitive sphere2;
};

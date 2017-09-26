#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "ofxGui.h"
#define MAXBALLS 10

class ofApp : public ofBaseApp {

public:
	void setup();

	void update();

	void draw();

	vector<Ball> balls;

		ofxPanel gui;
		ofParameter <int> radius;
		ofParameter <float> speedX;
		ofParameter <float> speedY;
		ofParameter <ofColor> colour;

};

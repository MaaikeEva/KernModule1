#pragma once

#include "ofMain.h"
#include "ofEvents.h"
#include "Ball.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);

		void mousePressed(int x, int y, int button);

	private:
		vector<Ball> balls;

		ofxPanel gui;
		ofParameter<int> radius;
		ofParameter<int> speedX;
		ofParameter<int> speedY;
		ofParameter<ofColor> colour;

		ofArduino arduino;

		void ofApp::setupArduino(const int& version);

		void digitalPinChanged(const int& pinNum);

		void analogPinChanged(const int& pinNum);

		void addBall();
};

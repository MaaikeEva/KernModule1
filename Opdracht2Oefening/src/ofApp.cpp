#include "ofApp.h"

#include "Ball.h"

void ofApp::setup() {
	for (int i = 0; i < 10; i++) {
		Ball newBall;
		newBall.setup();
		balls.push_back(newBall);
	}
}

void ofApp::update() {
	for (unsigned int i = 0; i < balls.size(); i++) {
		balls[i].update();
	}
}

void ofApp::draw() {
	for (unsigned int i = 0; i < balls.size(); i++) {
		balls[i].draw();
	}
}

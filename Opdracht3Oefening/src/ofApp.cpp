#include "ofApp.h"


void ofApp::setup(){
	ofSetFrameRate(20);
	ofBackground(ofColor::darkGrey);
}


void ofApp::update(){
	rotateX = rotateX + 1;
	rotateY = rotateY + 2;
	rotateZ = rotateZ + 3;
}


void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);

	if (rotate) {
		ofRotateX(rotateX);
		ofRotateY(rotateY);
		ofRotateZ(rotateZ);
	}

	if (drawGrid) {
		ofDrawGrid(100);
	}

	ofNoFill();
	ofSetColor(ofColor::aquamarine);
	ofDrawSphere(100, 100, 100, 50);
	ofDrawSphere(100, 200, 100, 10);
}


void ofApp::keyPressed(int key){
	if (key == 'g') {
		drawGrid = !drawGrid;
	}
	if (key == ' ') {
		rotate = !rotate;
	}
}



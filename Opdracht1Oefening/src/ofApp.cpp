#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){
	Ball1.update();
	Ball2.update();
	Ball3.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	//Ball1(ofColor::aliceBlue);
	Ball1.draw();
	Ball2.draw();
	Ball3.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	gui.add(drawGrid.set("Grid", false));
	gui.add(useLight.set("Light", true));

	ofSetBackgroundColor(ofColor::black);

	light.setDirectional();
	light.setPosition(-200, -200, -200);
	light.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, 0, 0));
	light.setDiffuseColor(ofColor::white);
	light.enable();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();

	ofEnableDepthTest();
	cam.begin();
	// ofNoFill();
	ofSetColor(ofColor::yellow);
	ofDrawSphere(0, 0, 0, 100);

	ofSetColor(ofColor::blue);
	ofDrawSphere(200, 0, 0, 50);

	ofSetColor(ofColor::green);
	ofDrawSphere(0, 200, 0, 20);

	ofSetColor(ofColor::red);
	ofDrawSphere(0, 0, 200, 10);

	if (drawGrid) ofDrawGrid(100);
	if (useLight) {
		ofEnableLighting();
	} else {
		ofDisableLighting();
	}
	cam.end();
	ofDisableDepthTest();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'l') useLight = !useLight;
	if (key == 'g') drawGrid = !drawGrid;
	if (key == ' ') drawGui = !drawGui;
}

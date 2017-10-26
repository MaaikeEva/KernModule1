#include "ofApp.h"


void ofApp::setup(){
	grabber.setDeviceID(0);
	grabber.initGrabber(CAM_WIDTH, CAM_HEIGHT);
	grabber.setDesiredFrameRate(30);

	sphere1.setRadius(100);
	sphere1.setPosition(-50, 100, 100);
	sphere1.mapTexCoordsFromTexture(grabber.getTexture());

	sphere2.setRadius(75);
	sphere2.setPosition(150, 200, 200);
	sphere2.mapTexCoordsFromTexture(grabber.getTexture());

	light.setDirectional();
	light.enable();
}


void ofApp::update(){

}

void ofApp::draw(){
	ofBackground(0);

	cam.setVFlip(true);
	cam.begin();
	ofEnableDepthTest();
	
	grabber.getTexture().bind();

	//laad de texture niet!

	sphere1.draw();
	sphere2.draw();


	grabber.getTexture().unbind();
	ofDisableDepthTest();

	cam.end();
}


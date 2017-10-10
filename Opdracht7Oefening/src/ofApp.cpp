#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	primitive = ofConePrimitive(coneRadius, coneHeight, coneRadiusSegments, coneHeightSegements);
	primitive.setMode(OF_PRIMITIVE_TRIANGLES);

}

//--------------------------------------------------------------
void ofApp::update(){
	vector<ofMeshFace> traingles = primitive.getMesh().getUniqueFaces();

	float displacement = sin(ofGetElapsedTimef() * 4) * 10;
	for (int i = 0; i < traingles.size(); i++) {
		ofVec3f faceNormal = traingles[i].getFaceNormal();
		for (int j = 0; j < 3; j++) {
			traingles[i].setVertex(j, traingles[i].getVertex(j) + faceNormal * displacement);
		}
	}
	primitive.getMesh().setFromTriangles(traingles);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	primitive.draw();
}

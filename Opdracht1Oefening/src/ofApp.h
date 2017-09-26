#pragma once

#include "ofMain.h"
#include "Ballclass.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

	private:
		Ballclass Ball1;
		Ballclass Ball2;
		Ballclass Ball3;
};

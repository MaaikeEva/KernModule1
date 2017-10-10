#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		private:
			ofConePrimitive primitive;

			float coneRadius = 100;
			float coneHeight = 200;

			int coneRadiusSegments = 10;
			int coneHeightSegments = 10;

			bool rotate = true;

			float spinX = 1;
			float spinY = 2;
};

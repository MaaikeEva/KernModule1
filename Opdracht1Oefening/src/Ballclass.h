#pragma once
#include "ofMain.h"

class Ballclass
{
public:
	Ballclass();
	void update();
	void draw();


private:
	float x;
	float y;
	float speedX;
	float speedY;
	int radius;
	ofColor color;
};

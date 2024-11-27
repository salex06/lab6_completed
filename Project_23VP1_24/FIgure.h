#pragma once
#include "pch.h"
#include "Point.h"
//using namespace System::Drawing;

class Figure {
protected:
	Point v;
	int a;
	
	int widthScreen;
	int heightScreen;
public:
	Figure();
	Figure(Point, int, int,int);


	virtual void move(Point, System::Drawing::Graphics^ s, System::Drawing::Color, System::Drawing::Color);

	virtual void show(System::Drawing::Graphics^ s, System::Drawing::Color, System::Drawing::Color) = 0;
	virtual void hide(System::Drawing::Graphics^) = 0;

	virtual ~Figure();

	class Exception {
	public:
		char* message;
		Exception(char* c) : message (c){}
		char* what() {
			return message;
		}
	};

};
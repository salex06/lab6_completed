#include "pch.h"
#include "Figure.h"

//using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
//using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;


Figure::Figure() {}

Figure::Figure(Point _v, int sideLength, int width, int height) :
	v(_v), a(sideLength), widthScreen(width), heightScreen(height) {
	if (_v.X < 0 || _v.Y < 0 || sideLength <= 0) {
		throw Exception("Некорректные координаты или длина стороны!");
	}

}

void Figure::move(Point _v, System::Drawing::Graphics^ s, System::Drawing::Color out,
	System::Drawing::Color back) {
	hide(s);
	v = _v;
	show(s, out, back);
}

Figure::~Figure() {}
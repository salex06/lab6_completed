#include "pch.h"
#include "ComplexFigure.h"
#include "FigArr.h"
using namespace std;

ComplexFigure::ComplexFigure(Triangle* _tr, Pentagone* _pnt) {
	FigureArr::add(this);
	triangle = _tr;
	pentagone = _pnt;
}

void ComplexFigure::show(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	pentagone->show(g, out, back);
	triangle->show(g, out, back);
}

void ComplexFigure::hide(System::Drawing::Graphics^ g) {
	pentagone->hide(g);
	triangle->hide(g);
}

void ComplexFigure::move(Point p, System::Drawing::Graphics^ s, System::Drawing::Color out, System::Drawing::Color back) {
	pentagone->move(p, s, out, back);
	triangle->move(p, s, out, back);
}

ComplexFigure::~ComplexFigure() {}
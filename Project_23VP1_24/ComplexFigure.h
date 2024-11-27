#pragma once
#include "pch.h"
#include "Figure.h"
#include "Triangle.h"
#include "Pentagone.h"
#include "FigArr.h"

class ComplexFigure : public Figure {
private:
	Triangle* triangle;
	Pentagone* pentagone;
public:
	ComplexFigure(Triangle*, Pentagone*);
	void show(System::Drawing::Graphics^, System::Drawing::Color, System::Drawing::Color) override;
	void hide(System::Drawing::Graphics^) override;
	void move(Point, System::Drawing::Graphics^, System::Drawing::Color, System::Drawing::Color) override;
	~ComplexFigure();
};
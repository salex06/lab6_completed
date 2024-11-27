#pragma once
#include "pch.h"
#include "FigArr.h"
#include "Figure.h"

class Triangle : public Figure {
public:
	Triangle(int, int, int, int, int);
	void show(System::Drawing::Graphics^ g, System::Drawing::Color, System::Drawing::Color) override;
	void hide(System::Drawing::Graphics^) override;
	~Triangle();
};
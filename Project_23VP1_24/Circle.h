#pragma once
#include "Figure.h"

class Circle : public Figure {
public:
	Circle(int, int, int, int, int);
	void show(System::Drawing::Graphics^ g, System::Drawing::Color, System::Drawing::Color) override;
	void hide(System::Drawing::Graphics^) override;
	~Circle();
};



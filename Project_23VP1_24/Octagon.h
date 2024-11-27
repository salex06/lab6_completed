#pragma once
#include "Figure.h"
#include "FigArr.h"
#define PI 3.1415926535897932384626433832795028841971693993751058209
#define OCTAGON_ANGLES 8

class Octagon : public Figure {
public:
	Octagon(int, int, int, int, int);
	void show(System::Drawing::Graphics^ g, System::Drawing::Color, System::Drawing::Color) override;
	void hide(System::Drawing::Graphics^) override;
	~Octagon();
};



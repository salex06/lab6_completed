#pragma once
#pragma once
#include "Figure.h"
#include "FigArr.h"

class Pentagone : public Figure {
public:
	Pentagone(int, int, int, int, int);
	void show(System::Drawing::Graphics^ g, System::Drawing::Color, System::Drawing::Color) override;
	void hide(System::Drawing::Graphics^) override;
	~Pentagone();
};
#pragma once
#include <vector>
#include "Figure.h"

class FigureArr {
public:
	static std::vector<Figure*> vec;
	void view(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back);
	static void add(Figure*);
	~FigureArr();
};


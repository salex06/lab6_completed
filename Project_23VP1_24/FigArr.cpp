#include "pch.h"
#include "FigArr.h"

std::vector<Figure*>FigureArr::vec;

void FigureArr::add(Figure* elem) {
	vec.push_back(elem);
}

void FigureArr::view(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	for (auto i : vec) {
		int s = 0;
		i->show(g, out, back);
	}
}

FigureArr::~FigureArr() {
	while (!vec.empty()) {
		auto tmp = vec.back();
		vec.pop_back();
		delete tmp;
		tmp = nullptr;
	}
}

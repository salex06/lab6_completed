#include "pch.h"
#include "Circle.h"
#include "FigArr.h"
#include <math.h>

//using namespace std;

Circle::Circle(int x, int y, int radius, int width, int height) : Figure(Point(x, y), radius, width, height) {
	if (x - radius <= 0 || x + radius > width || y - radius <= 0 || y + radius > heightScreen) {
		throw Exception("Выход за границы окна");
	}
	FigureArr::add(this);
}

void Circle::show(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(out);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(back);
	p->Width = 2;

	if (v.X - this->a <= 0 || v.X + this->a > this->widthScreen || v.Y - this->a <= 0 || v.Y + this->a > heightScreen) {
		throw Exception("Выход за границы окна");
	}


	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddEllipse(v.X - this->a, v.Y - this->a, this->a * 2, this->a * 2);
	//g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

void Circle::hide(System::Drawing::Graphics^ g) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(System::Drawing::Color::Bisque);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Bisque);
	p->Width = 2;

	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddEllipse(v.X - this->a, v.Y - this->a, this->a * 2, this->a * 2);
	//g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

Circle::~Circle() {}
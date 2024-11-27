#include "pch.h"
//#include "FigArr.h"
#include "Triangle.h"
#include <math.h>

//using namespace std;

Triangle::Triangle(int x, int y, int side, int width, int height) : Figure(Point(x, y), side,width, height) {
	array<System::Drawing::Point>^ points = {
	System::Drawing::Point(v.X, v.Y),
	System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
	System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5)))

	};

	if (points[0].Y <= 0 || points[1].Y > heightScreen || points[1].X <= 0 || points[2].X > widthScreen) {
		throw Exception("Выход за границы окна");
	}
	FigureArr::add(this);
}

void Triangle::show(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(out);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(back);
	p->Width = 2;


	array<System::Drawing::Point>^ points = {
		System::Drawing::Point(v.X, v.Y),
		System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5)))

	};

	if (points[0].Y <= 0 || points[1].Y > heightScreen || points[1].X <= 0 || points[2].X > widthScreen) {
		throw Exception("Выход за границы окна");
	}

	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(points[0], points[1]);
	gp->AddLine(points[1], points[2]);
	gp->AddLine(points[0], points[2]);
	gp->CloseFigure();

	g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

void Triangle::hide(System::Drawing::Graphics^ g) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(System::Drawing::Color::Bisque);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Bisque);
	p->Width = 2;


	array<System::Drawing::Point>^ points = {
		System::Drawing::Point(v.X, v.Y),
		System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5)))

	};

	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(points[0], points[1]);
	gp->AddLine(points[1], points[2]);
	gp->AddLine(points[0], points[2]);
	gp->CloseFigure();

	g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

Triangle::~Triangle() {}
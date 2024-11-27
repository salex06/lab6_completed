#include "pch.h"
#include "Pentagone.h"
#include <math.h>
//#include "FigArr.h"
//using namespace std;

Pentagone::Pentagone(int x, int y, int sideLength, int width, int height) : Figure(Point(x, y), sideLength, width, height) {
	array<System::Drawing::Point>^ points = {
	System::Drawing::Point(v.X, v.Y),
	System::Drawing::Point(v.X + (int)(a * (1.0 + sqrt(5)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5))),
	System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
	System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
	System::Drawing::Point(v.X - (int)(a * (1.0 + sqrt(5.0)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5)))
	};

	if (points[0].Y <= 0 || points[1].X > widthScreen ||
		points[2].Y > heightScreen || points[4].X <= 0) {
		throw Exception("Выход за границы окна");
	}
	FigureArr::add(this);
}

void Pentagone::show(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(out);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(back);
	p->Width = 2;

	//рассчет координат пятиугольника
	array<System::Drawing::Point>^ points = {
		System::Drawing::Point(v.X, v.Y),
		System::Drawing::Point(v.X + (int)(a * (1.0 + sqrt(5)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5))),
		System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X - (int)(a * (1.0 + sqrt(5.0)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5)))
	};

	if (points[0].Y <= 0 || points[1].X > widthScreen ||
		points[2].Y > heightScreen || points[4].X <= 0) {
		throw Exception("Выход за границы окна");
	}


	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(points[0], points[1]);
	gp->AddLine(points[1], points[2]);
	gp->AddLine(points[2], points[3]);
	gp->AddLine(points[3], points[4]);
	gp->AddLine(points[4], points[0]);
	gp->CloseFigure();

	g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

void Pentagone::hide(System::Drawing::Graphics^ g) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(System::Drawing::Color::Bisque);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Bisque);
	p->Width = 2;

	//рассчет координат пятиугольника
	array<System::Drawing::Point>^ points = {
		System::Drawing::Point(v.X, v.Y),
		System::Drawing::Point(v.X + (int)(a * (1.0 + sqrt(5)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5))),
		System::Drawing::Point(v.X + a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X - a / 2, v.Y + (int)(a / 2 * pow(pow(1 + sqrt(5), 2) - 1, 0.5))),
		System::Drawing::Point(v.X - (int)(a * (1.0 + sqrt(5.0)) / 4.0), v.Y + (int)(a * pow(1 - pow(1 + sqrt(5), 2) / 16, 0.5)))
	};

	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(points[0], points[1]);
	gp->AddLine(points[1], points[2]);
	gp->AddLine(points[2], points[3]);
	gp->AddLine(points[3], points[4]);
	gp->AddLine(points[4], points[0]);
	gp->CloseFigure();

	g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

Pentagone::~Pentagone() {}
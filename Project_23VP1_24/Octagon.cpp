#include "pch.h"
#include "Octagon.h"
#include <math.h>

//using namespace std;

Octagon::Octagon(int x, int y, int side, int width, int height) : Figure(Point(x, y), side, width, height) {
	for (int i = 0; i < OCTAGON_ANGLES; i++) {
		double x = v.X + side * cos((double)i * PI / 4);
		double y = v.Y + side * sin((double)i * PI / 4);
		if (x <= 0 || x > widthScreen || y <= 0 || y > heightScreen) {
			throw Exception("Выход за границы окна");
		}
	}
	FigureArr::add(this);
}

void Octagon::show(System::Drawing::Graphics^ g, System::Drawing::Color out, System::Drawing::Color back) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(out);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(back);
	p->Width = 2;

	Point points[OCTAGON_ANGLES]{};

	for (int i = 0; i < OCTAGON_ANGLES; i++) {
		double x = v.X + this->a * cos((double)i * PI / 4);
		double y = v.Y + this->a * sin((double)i * PI / 4);
		points[i] = Point(x, y);
	}
	

	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(System::Drawing::Point(points[0].X, points[0].Y), System::Drawing::Point(points[1].X, points[1].Y));
	gp->AddLine(System::Drawing::Point(points[1].X, points[1].Y), System::Drawing::Point(points[2].X, points[2].Y));
	gp->AddLine(System::Drawing::Point(points[2].X, points[2].Y), System::Drawing::Point(points[3].X, points[3].Y));
	gp->AddLine(System::Drawing::Point(points[3].X, points[3].Y), System::Drawing::Point(points[4].X, points[4].Y));
	gp->AddLine(System::Drawing::Point(points[4].X, points[4].Y), System::Drawing::Point(points[5].X, points[5].Y));
	gp->AddLine(System::Drawing::Point(points[5].X, points[5].Y), System::Drawing::Point(points[6].X, points[6].Y));
	gp->AddLine(System::Drawing::Point(points[6].X, points[6].Y), System::Drawing::Point(points[7].X, points[7].Y));
	gp->AddLine(System::Drawing::Point(points[7].X, points[7].Y), System::Drawing::Point(points[0].X, points[0].Y));
	gp->CloseFigure();

	//g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

void Octagon::hide(System::Drawing::Graphics^ g) {
	System::Drawing::Pen^ p = gcnew System::Drawing::Pen(System::Drawing::Color::Bisque);
	System::Drawing::SolidBrush^ b = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Bisque);
	p->Width = 2;


	Point points[OCTAGON_ANGLES]{};

	for (int i = 0; i < OCTAGON_ANGLES; i++) {
		double x = v.X + this->a * cos((double)i * PI / 4);
		double y = v.Y + this->a * sin((double)i * PI / 4);
		if (x <= 0 || x > widthScreen || y <= 0 || y > heightScreen) {
			throw Exception("Выход за границы окна");
		}
		points[i] = Point(x, y);
	}


	System::Drawing::Drawing2D::GraphicsPath^ gp = gcnew System::Drawing::Drawing2D::GraphicsPath();
	gp->AddLine(System::Drawing::Point(points[0].X, points[0].Y), System::Drawing::Point(points[1].X, points[1].Y));
	gp->AddLine(System::Drawing::Point(points[1].X, points[1].Y), System::Drawing::Point(points[2].X, points[2].Y));
	gp->AddLine(System::Drawing::Point(points[2].X, points[2].Y), System::Drawing::Point(points[3].X, points[3].Y));
	gp->AddLine(System::Drawing::Point(points[3].X, points[3].Y), System::Drawing::Point(points[4].X, points[4].Y));
	gp->AddLine(System::Drawing::Point(points[4].X, points[4].Y), System::Drawing::Point(points[5].X, points[5].Y));
	gp->AddLine(System::Drawing::Point(points[5].X, points[5].Y), System::Drawing::Point(points[6].X, points[6].Y));
	gp->AddLine(System::Drawing::Point(points[6].X, points[6].Y), System::Drawing::Point(points[7].X, points[7].Y));
	gp->AddLine(System::Drawing::Point(points[7].X, points[7].Y), System::Drawing::Point(points[0].X, points[0].Y));
	gp->CloseFigure();

	//g->DrawLines(p, points);
	g->FillPath(b, gp);
	g->DrawPath(p, gp);
}

Octagon::~Octagon() {}
#pragma once
#include "Triangle.h"
#include "Figure.h"
#include "Pentagone.h"
#include "Octagon.h"
#include "Circle.h"
//#include "myStorage.h"
FigureArr farr;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ xCorLabel;
	private: System::Windows::Forms::Label^ yCorLabel;
	private: System::Windows::Forms::Label^ sideLengthLabel;
	private: System::Windows::Forms::RadioButton^ triaRadio;
	private: System::Windows::Forms::RadioButton^ pentaRadio;
	protected:






	private: System::Windows::Forms::Button^ createFigBtn;




	private: System::Windows::Forms::TextBox^ xCorBox;
	private: System::Windows::Forms::TextBox^ yCorBox;
	private: System::Windows::Forms::TextBox^ sideLengthBox;
	private: System::Windows::Forms::Label^ numFigLabel;
	private: System::Windows::Forms::TextBox^ numFigBox;
	private: System::Windows::Forms::Button^ hideFigBtn;
	private: System::Windows::Forms::Button^ showFigBtn;
	private: System::Windows::Forms::Button^ moveFigBtn;
	private: System::Windows::Forms::Button^ showAllBtn;
	private: System::Windows::Forms::TextBox^ messageBox;
	private: System::Windows::Forms::ColorDialog^ backColorDialog;
	private: System::Windows::Forms::ColorDialog^ outColorDialog;
	private: System::Windows::Forms::Button^ outColorBtn;
	private: System::Windows::Forms::Button^ backColorBtn;
	private: System::Windows::Forms::RadioButton^ octaRadio;
	private: System::Windows::Forms::RadioButton^ circleRadio;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->xCorLabel = (gcnew System::Windows::Forms::Label());
			this->yCorLabel = (gcnew System::Windows::Forms::Label());
			this->sideLengthLabel = (gcnew System::Windows::Forms::Label());
			this->triaRadio = (gcnew System::Windows::Forms::RadioButton());
			this->pentaRadio = (gcnew System::Windows::Forms::RadioButton());
			this->createFigBtn = (gcnew System::Windows::Forms::Button());
			this->xCorBox = (gcnew System::Windows::Forms::TextBox());
			this->yCorBox = (gcnew System::Windows::Forms::TextBox());
			this->sideLengthBox = (gcnew System::Windows::Forms::TextBox());
			this->numFigLabel = (gcnew System::Windows::Forms::Label());
			this->numFigBox = (gcnew System::Windows::Forms::TextBox());
			this->hideFigBtn = (gcnew System::Windows::Forms::Button());
			this->showFigBtn = (gcnew System::Windows::Forms::Button());
			this->moveFigBtn = (gcnew System::Windows::Forms::Button());
			this->showAllBtn = (gcnew System::Windows::Forms::Button());
			this->messageBox = (gcnew System::Windows::Forms::TextBox());
			this->backColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->outColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->outColorBtn = (gcnew System::Windows::Forms::Button());
			this->backColorBtn = (gcnew System::Windows::Forms::Button());
			this->octaRadio = (gcnew System::Windows::Forms::RadioButton());
			this->circleRadio = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// xCorLabel
			// 
			this->xCorLabel->AutoSize = true;
			this->xCorLabel->Location = System::Drawing::Point(12, 282);
			this->xCorLabel->Name = L"xCorLabel";
			this->xCorLabel->Size = System::Drawing::Size(135, 20);
			this->xCorLabel->TabIndex = 0;
			this->xCorLabel->Text = L"Координата по x";
			// 
			// yCorLabel
			// 
			this->yCorLabel->AutoSize = true;
			this->yCorLabel->Location = System::Drawing::Point(12, 313);
			this->yCorLabel->Name = L"yCorLabel";
			this->yCorLabel->Size = System::Drawing::Size(135, 20);
			this->yCorLabel->TabIndex = 1;
			this->yCorLabel->Text = L"Координата по y";
			// 
			// sideLengthLabel
			// 
			this->sideLengthLabel->AutoSize = true;
			this->sideLengthLabel->Location = System::Drawing::Point(12, 345);
			this->sideLengthLabel->Name = L"sideLengthLabel";
			this->sideLengthLabel->Size = System::Drawing::Size(58, 20);
			this->sideLengthLabel->TabIndex = 2;
			this->sideLengthLabel->Text = L"Длина";
			// 
			// triaRadio
			// 
			this->triaRadio->AutoSize = true;
			this->triaRadio->Location = System::Drawing::Point(16, 450);
			this->triaRadio->Name = L"triaRadio";
			this->triaRadio->Size = System::Drawing::Size(129, 24);
			this->triaRadio->TabIndex = 3;
			this->triaRadio->Text = L"Треугольник";
			this->triaRadio->UseVisualStyleBackColor = true;
			// 
			// pentaRadio
			// 
			this->pentaRadio->AutoSize = true;
			this->pentaRadio->Location = System::Drawing::Point(16, 480);
			this->pentaRadio->Name = L"pentaRadio";
			this->pentaRadio->Size = System::Drawing::Size(141, 24);
			this->pentaRadio->TabIndex = 4;
			this->pentaRadio->Text = L"Пятиугольник";
			this->pentaRadio->UseVisualStyleBackColor = true;
			// 
			// createFigBtn
			// 
			this->createFigBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->createFigBtn->Location = System::Drawing::Point(16, 519);
			this->createFigBtn->Name = L"createFigBtn";
			this->createFigBtn->Size = System::Drawing::Size(241, 59);
			this->createFigBtn->TabIndex = 6;
			this->createFigBtn->Text = L"Создать фигуру";
			this->createFigBtn->UseVisualStyleBackColor = true;
			this->createFigBtn->Click += gcnew System::EventHandler(this, &Form1::createFigBtn_Click);
			// 
			// xCorBox
			// 
			this->xCorBox->Location = System::Drawing::Point(157, 282);
			this->xCorBox->Name = L"xCorBox";
			this->xCorBox->Size = System::Drawing::Size(100, 26);
			this->xCorBox->TabIndex = 7;
			// 
			// yCorBox
			// 
			this->yCorBox->Location = System::Drawing::Point(157, 314);
			this->yCorBox->Name = L"yCorBox";
			this->yCorBox->Size = System::Drawing::Size(100, 26);
			this->yCorBox->TabIndex = 8;
			// 
			// sideLengthBox
			// 
			this->sideLengthBox->Location = System::Drawing::Point(157, 346);
			this->sideLengthBox->Name = L"sideLengthBox";
			this->sideLengthBox->Size = System::Drawing::Size(100, 26);
			this->sideLengthBox->TabIndex = 9;
			// 
			// numFigLabel
			// 
			this->numFigLabel->AutoSize = true;
			this->numFigLabel->Location = System::Drawing::Point(600, 282);
			this->numFigLabel->Name = L"numFigLabel";
			this->numFigLabel->Size = System::Drawing::Size(121, 20);
			this->numFigLabel->TabIndex = 10;
			this->numFigLabel->Text = L"Номер фигуры";
			// 
			// numFigBox
			// 
			this->numFigBox->Location = System::Drawing::Point(727, 282);
			this->numFigBox->Name = L"numFigBox";
			this->numFigBox->Size = System::Drawing::Size(100, 26);
			this->numFigBox->TabIndex = 11;
			// 
			// hideFigBtn
			// 
			this->hideFigBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hideFigBtn->Location = System::Drawing::Point(604, 326);
			this->hideFigBtn->Name = L"hideFigBtn";
			this->hideFigBtn->Size = System::Drawing::Size(223, 59);
			this->hideFigBtn->TabIndex = 12;
			this->hideFigBtn->Text = L"Скрыть фигуру";
			this->hideFigBtn->UseVisualStyleBackColor = true;
			this->hideFigBtn->Click += gcnew System::EventHandler(this, &Form1::hideFigBtn_Click);
			// 
			// showFigBtn
			// 
			this->showFigBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showFigBtn->Location = System::Drawing::Point(604, 389);
			this->showFigBtn->Name = L"showFigBtn";
			this->showFigBtn->Size = System::Drawing::Size(223, 59);
			this->showFigBtn->TabIndex = 13;
			this->showFigBtn->Text = L"Показать фигуру";
			this->showFigBtn->UseVisualStyleBackColor = true;
			this->showFigBtn->Click += gcnew System::EventHandler(this, &Form1::showFigBtn_Click);
			// 
			// moveFigBtn
			// 
			this->moveFigBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->moveFigBtn->Location = System::Drawing::Point(604, 454);
			this->moveFigBtn->Name = L"moveFigBtn";
			this->moveFigBtn->Size = System::Drawing::Size(223, 59);
			this->moveFigBtn->TabIndex = 14;
			this->moveFigBtn->Text = L"Переместить фигуру";
			this->moveFigBtn->UseVisualStyleBackColor = true;
			this->moveFigBtn->Click += gcnew System::EventHandler(this, &Form1::moveFigBtn_Click);
			// 
			// showAllBtn
			// 
			this->showAllBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showAllBtn->Location = System::Drawing::Point(604, 519);
			this->showAllBtn->Name = L"showAllBtn";
			this->showAllBtn->Size = System::Drawing::Size(223, 59);
			this->showAllBtn->TabIndex = 15;
			this->showAllBtn->Text = L"Показать все фигуры";
			this->showAllBtn->UseVisualStyleBackColor = true;
			this->showAllBtn->Click += gcnew System::EventHandler(this, &Form1::showAllBtn_Click);
			// 
			// messageBox
			// 
			this->messageBox->Enabled = false;
			this->messageBox->Location = System::Drawing::Point(16, 12);
			this->messageBox->Name = L"messageBox";
			this->messageBox->ReadOnly = true;
			this->messageBox->Size = System::Drawing::Size(430, 26);
			this->messageBox->TabIndex = 16;
			this->messageBox->Visible = false;
			// 
			// outColorBtn
			// 
			this->outColorBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->outColorBtn->Location = System::Drawing::Point(263, 522);
			this->outColorBtn->Name = L"outColorBtn";
			this->outColorBtn->Size = System::Drawing::Size(93, 53);
			this->outColorBtn->TabIndex = 17;
			this->outColorBtn->Text = L"Цвет контура";
			this->outColorBtn->UseVisualStyleBackColor = true;
			this->outColorBtn->Click += gcnew System::EventHandler(this, &Form1::outColorBtn_Click);
			// 
			// backColorBtn
			// 
			this->backColorBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backColorBtn->Location = System::Drawing::Point(362, 522);
			this->backColorBtn->Name = L"backColorBtn";
			this->backColorBtn->Size = System::Drawing::Size(93, 53);
			this->backColorBtn->TabIndex = 18;
			this->backColorBtn->Text = L"Цвет фона";
			this->backColorBtn->UseVisualStyleBackColor = true;
			this->backColorBtn->Click += gcnew System::EventHandler(this, &Form1::backColorBtn_Click);
			// 
			// octaRadio
			// 
			this->octaRadio->AutoSize = true;
			this->octaRadio->Location = System::Drawing::Point(16, 420);
			this->octaRadio->Name = L"octaRadio";
			this->octaRadio->Size = System::Drawing::Size(159, 24);
			this->octaRadio->TabIndex = 19;
			this->octaRadio->Text = L"Восьмиугольник";
			this->octaRadio->UseVisualStyleBackColor = true;
			// 
			// circleRadio
			// 
			this->circleRadio->AutoSize = true;
			this->circleRadio->Checked = true;
			this->circleRadio->Location = System::Drawing::Point(16, 389);
			this->circleRadio->Name = L"circleRadio";
			this->circleRadio->Size = System::Drawing::Size(125, 24);
			this->circleRadio->TabIndex = 20;
			this->circleRadio->TabStop = true;
			this->circleRadio->Text = L"Окружность";
			this->circleRadio->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(839, 600);
			this->Controls->Add(this->circleRadio);
			this->Controls->Add(this->octaRadio);
			this->Controls->Add(this->backColorBtn);
			this->Controls->Add(this->outColorBtn);
			this->Controls->Add(this->messageBox);
			this->Controls->Add(this->showAllBtn);
			this->Controls->Add(this->moveFigBtn);
			this->Controls->Add(this->showFigBtn);
			this->Controls->Add(this->hideFigBtn);
			this->Controls->Add(this->numFigBox);
			this->Controls->Add(this->numFigLabel);
			this->Controls->Add(this->sideLengthBox);
			this->Controls->Add(this->yCorBox);
			this->Controls->Add(this->xCorBox);
			this->Controls->Add(this->createFigBtn);
			this->Controls->Add(this->pentaRadio);
			this->Controls->Add(this->triaRadio);
			this->Controls->Add(this->sideLengthLabel);
			this->Controls->Add(this->yCorLabel);
			this->Controls->Add(this->xCorLabel);
			this->Name = L"Form1";
			this->Text = L"23VP1_24";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void createFigBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		messageBox->Visible = false;
		Graphics^ h = CreateGraphics();
		//h->Clear(BackColor);
		try {
			int xcor = System::Convert::ToInt32(xCorBox->Text);
			int ycor = System::Convert::ToInt32(yCorBox->Text);
			int side = System::Convert::ToInt32(sideLengthBox->Text);
			int heightScreen = this->Height;
			int widthScreen = this->Width;
			if (triaRadio->Checked) {
				Triangle* tria = new Triangle(xcor, ycor, side, widthScreen, heightScreen);
				tria->show(h, outColorBtn->BackColor, backColorBtn->BackColor);
			}
			else if (pentaRadio->Checked) {
				Pentagone* penta = new Pentagone(xcor, ycor, side, widthScreen, heightScreen);
				penta->show(h, outColorBtn->BackColor, backColorBtn->BackColor);
			}
			else if (octaRadio->Checked) {
				Octagon* octa = new Octagon(xcor, ycor, side, widthScreen, heightScreen);
				octa->show(h, outColorBtn->BackColor, backColorBtn->BackColor);
			}
			else if (circleRadio->Checked) {
				Circle* circle = new Circle(xcor, ycor, side, widthScreen, heightScreen);
				circle->show(h, outColorBtn->BackColor, backColorBtn->BackColor);
			}
		}
		catch (Figure::Exception ex) {
			messageBox->Visible = true;
			String^ str = gcnew String(ex.what());
			messageBox->Text = str;
		}
		catch (...) {
			messageBox->Visible = true;
			messageBox->Text = L"Не все поля заполнены!";
		}
	}	
		   
		
	private: System::Void hideFigBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		messageBox->Visible = false;
		try {
			Graphics^ h = CreateGraphics();
			int num = System::Convert::ToInt32(numFigBox->Text);
			num--;

			farr.vec.at(num)->hide(h);
		}
		catch (Figure::Exception ex) {
			messageBox->Visible = true;
			String^ str = gcnew String(ex.what());
			messageBox->Text = str;
		}
		catch (...) {
			messageBox->Visible = true;
			messageBox->Text = L"Некорректные данные!";
		}
	}

	private: System::Void showFigBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		messageBox->Visible = false;
		try {
			Graphics^ h = CreateGraphics();
			int num = System::Convert::ToInt32(numFigBox->Text);
			num--;

			farr.vec.at(num)->show(h, outColorBtn->BackColor, backColorBtn->BackColor);
		}
		catch (Figure::Exception ex) {
			messageBox->Visible = true;
			String^ str = gcnew String(ex.what());
			messageBox->Text = str;
		}
		catch (...) {
			messageBox->Visible = true;
			messageBox->Text = L"Некорректные данные!";
		}
	}
	private: System::Void moveFigBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		messageBox->Visible = false;
		try {
			Graphics^ h = CreateGraphics();
			int xcor = System::Convert::ToInt32(xCorBox->Text);
			int ycor = System::Convert::ToInt32(yCorBox->Text);
			int num = System::Convert::ToInt32(numFigBox->Text);
			num--;

			farr.vec.at(num)->move(::Point(xcor, ycor), h, outColorBtn->BackColor, backColorBtn->BackColor);
		}
		catch (Figure::Exception ex) {
			messageBox->Visible = true;
			String^ str = gcnew String(ex.what());
			messageBox->Text = str;
		}
		catch (...) {
			messageBox->Visible = true;
			messageBox->Text = L"Некорректные данные!";
		}
	}
	private: System::Void showAllBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		messageBox->Visible = false;
		try {
			Graphics^ h = CreateGraphics();
			farr.view(h, outColorBtn->BackColor, backColorBtn->BackColor);
		}
		catch (Figure::Exception ex) {
			messageBox->Visible = true;
			String^ str = gcnew String(ex.what());
			messageBox->Text = str;
		}
		catch (...) {
			messageBox->Visible = true;
			messageBox->Text = L"Неизвестная ошибка";
		}
	}
	private: System::Void outColorBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		outColorDialog->ShowDialog();
		outColorBtn->BackColor = outColorDialog->Color;
	}
	private: System::Void backColorBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		backColorDialog->ShowDialog();
		backColorBtn->BackColor = backColorDialog->Color;
	}
};
}
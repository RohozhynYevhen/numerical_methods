#pragma once
#include <cmath>
#include <string>
#include <string>

double* gauss(double** a, double* y, int n)
{
	double* x, max;
	int k, index;
	const double eps = 0.00001;  // точность
	x = new double[n];
	k = 0;
	while (k < n)
	{
		// Поиск строки с максимальным a[i][k]
		max = abs(a[k][k]);
		index = k;
		for (int i = k + 1; i < n; i++)
		{
			if (abs(a[i][k]) > max)
			{
				max = abs(a[i][k]);
				index = i;
			}
		}
		// Перестановка строк
		if (max < eps)
		{
			// нет ненулевых диагональных элементов
			//MessageBox::Show("Решение получить невозможно из-за нулевого столбца ");
			return 0;
		}
		for (int j = 0; j < n; j++)
		{
			double temp = a[k][j];
			a[k][j] = a[index][j];
			a[index][j] = temp;
		}
		double temp = y[k];
		y[k] = y[index];
		y[index] = temp;
		// Нормализация уравнений
		for (int i = k; i < n; i++)
		{
			double temp = a[i][k];
			if (abs(temp) < eps) continue; // для нулевого коэффициента пропустить
			for (int j = 0; j < n; j++)
				a[i][j] = a[i][j] / temp;
			y[i] = y[i] / temp;
			if (i == k)  continue; // уравнение не вычитать само из себя
			for (int j = 0; j < n; j++)
				a[i][j] = a[i][j] - a[k][j];
			y[i] = y[i] - y[k];
		}
		k++;
	}
	// обратная подстановка
	for (k = n - 1; k >= 0; k--)
	{
		x[k] = y[k];
		for (int i = 0; i < k; i++)
			y[i] = y[i] - a[i][k] * x[k];
	}
	return x;
}

namespace lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ boxB1;

	private: System::Windows::Forms::Label^ b1;
	private: System::Windows::Forms::TextBox^ boxA1;



	private: System::Windows::Forms::Label^ a1;




	private: System::Windows::Forms::TextBox^ boxD1;

	private: System::Windows::Forms::TextBox^ boxC1;

	private: System::Windows::Forms::Label^ d1;

	private: System::Windows::Forms::Label^ c1;
















	private: System::Windows::Forms::TextBox^ boxD4;


	private: System::Windows::Forms::TextBox^ boxC4;

	private: System::Windows::Forms::Label^ d4;

	private: System::Windows::Forms::Label^ c4;
	private: System::Windows::Forms::TextBox^ boxB4;


	private: System::Windows::Forms::Label^ b4;
	private: System::Windows::Forms::TextBox^ boxA4;


	private: System::Windows::Forms::Label^ a4;
	private: System::Windows::Forms::TextBox^ boxD3;


	private: System::Windows::Forms::TextBox^ boxC3;

	private: System::Windows::Forms::Label^ d3;

	private: System::Windows::Forms::Label^ c3;
	private: System::Windows::Forms::TextBox^ boxB3;


	private: System::Windows::Forms::Label^ b3;
	private: System::Windows::Forms::TextBox^ boxA3;


	private: System::Windows::Forms::Label^ a3;
	private: System::Windows::Forms::TextBox^ boxD2;


	private: System::Windows::Forms::TextBox^ boxC2;

	private: System::Windows::Forms::Label^ d2;
	private: System::Windows::Forms::Label^ c2;
	private: System::Windows::Forms::TextBox^ boxB2;




	private: System::Windows::Forms::Label^ b2;
	private: System::Windows::Forms::TextBox^ boxA2;


	private: System::Windows::Forms::Label^ a2;
private: System::Windows::Forms::TextBox^ boxX0;


private: System::Windows::Forms::Label^ x0;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ res;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Label());
			this->boxX0 = (gcnew System::Windows::Forms::TextBox());
			this->x0 = (gcnew System::Windows::Forms::Label());
			this->boxD4 = (gcnew System::Windows::Forms::TextBox());
			this->boxC4 = (gcnew System::Windows::Forms::TextBox());
			this->d4 = (gcnew System::Windows::Forms::Label());
			this->c4 = (gcnew System::Windows::Forms::Label());
			this->boxB4 = (gcnew System::Windows::Forms::TextBox());
			this->b4 = (gcnew System::Windows::Forms::Label());
			this->boxA4 = (gcnew System::Windows::Forms::TextBox());
			this->a4 = (gcnew System::Windows::Forms::Label());
			this->boxD3 = (gcnew System::Windows::Forms::TextBox());
			this->boxC3 = (gcnew System::Windows::Forms::TextBox());
			this->d3 = (gcnew System::Windows::Forms::Label());
			this->c3 = (gcnew System::Windows::Forms::Label());
			this->boxB3 = (gcnew System::Windows::Forms::TextBox());
			this->b3 = (gcnew System::Windows::Forms::Label());
			this->boxA3 = (gcnew System::Windows::Forms::TextBox());
			this->a3 = (gcnew System::Windows::Forms::Label());
			this->boxD2 = (gcnew System::Windows::Forms::TextBox());
			this->boxC2 = (gcnew System::Windows::Forms::TextBox());
			this->d2 = (gcnew System::Windows::Forms::Label());
			this->c2 = (gcnew System::Windows::Forms::Label());
			this->boxB2 = (gcnew System::Windows::Forms::TextBox());
			this->b2 = (gcnew System::Windows::Forms::Label());
			this->boxA2 = (gcnew System::Windows::Forms::TextBox());
			this->a2 = (gcnew System::Windows::Forms::Label());
			this->boxD1 = (gcnew System::Windows::Forms::TextBox());
			this->boxC1 = (gcnew System::Windows::Forms::TextBox());
			this->d1 = (gcnew System::Windows::Forms::Label());
			this->c1 = (gcnew System::Windows::Forms::Label());
			this->boxB1 = (gcnew System::Windows::Forms::TextBox());
			this->b1 = (gcnew System::Windows::Forms::Label());
			this->boxA1 = (gcnew System::Windows::Forms::TextBox());
			this->a1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisX2->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisY->ScaleBreakStyle->BreakLineStyle = System::Windows::Forms::DataVisualization::Charting::BreakLineStyle::Wave;
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Near;
			chartArea1->AxisY2->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
			this->chart1->Location = System::Drawing::Point(354, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->CustomProperties = L"IsXAxisQuantitative=False";
			series1->IsXValueIndexed = true;
			series1->MarkerBorderWidth = 0;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(450, 373);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Графік функції";
			this->chart1->Titles->Add(title1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->res);
			this->panel1->Controls->Add(this->boxX0);
			this->panel1->Controls->Add(this->x0);
			this->panel1->Controls->Add(this->boxD4);
			this->panel1->Controls->Add(this->boxC4);
			this->panel1->Controls->Add(this->d4);
			this->panel1->Controls->Add(this->c4);
			this->panel1->Controls->Add(this->boxB4);
			this->panel1->Controls->Add(this->b4);
			this->panel1->Controls->Add(this->boxA4);
			this->panel1->Controls->Add(this->a4);
			this->panel1->Controls->Add(this->boxD3);
			this->panel1->Controls->Add(this->boxC3);
			this->panel1->Controls->Add(this->d3);
			this->panel1->Controls->Add(this->c3);
			this->panel1->Controls->Add(this->boxB3);
			this->panel1->Controls->Add(this->b3);
			this->panel1->Controls->Add(this->boxA3);
			this->panel1->Controls->Add(this->a3);
			this->panel1->Controls->Add(this->boxD2);
			this->panel1->Controls->Add(this->boxC2);
			this->panel1->Controls->Add(this->d2);
			this->panel1->Controls->Add(this->c2);
			this->panel1->Controls->Add(this->boxB2);
			this->panel1->Controls->Add(this->b2);
			this->panel1->Controls->Add(this->boxA2);
			this->panel1->Controls->Add(this->a2);
			this->panel1->Controls->Add(this->boxD1);
			this->panel1->Controls->Add(this->boxC1);
			this->panel1->Controls->Add(this->d1);
			this->panel1->Controls->Add(this->c1);
			this->panel1->Controls->Add(this->boxB1);
			this->panel1->Controls->Add(this->b1);
			this->panel1->Controls->Add(this->boxA1);
			this->panel1->Controls->Add(this->a1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 373);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 47);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Розрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// res
			// 
			this->res->AutoSize = true;
			this->res->Location = System::Drawing::Point(32, 225);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(0, 13);
			this->res->TabIndex = 44;
			// 
			// boxX0
			// 
			this->boxX0->Location = System::Drawing::Point(62, 186);
			this->boxX0->Name = L"boxX0";
			this->boxX0->Size = System::Drawing::Size(39, 20);
			this->boxX0->TabIndex = 43;
			// 
			// x0
			// 
			this->x0->AutoSize = true;
			this->x0->Location = System::Drawing::Point(31, 189);
			this->x0->Name = L"x0";
			this->x0->Size = System::Drawing::Size(30, 13);
			this->x0->TabIndex = 42;
			this->x0->Text = L"x0 = ";
			// 
			// boxD4
			// 
			this->boxD4->Location = System::Drawing::Point(232, 138);
			this->boxD4->Name = L"boxD4";
			this->boxD4->Size = System::Drawing::Size(39, 20);
			this->boxD4->TabIndex = 33;
			// 
			// boxC4
			// 
			this->boxC4->Location = System::Drawing::Point(162, 138);
			this->boxC4->Name = L"boxC4";
			this->boxC4->Size = System::Drawing::Size(39, 20);
			this->boxC4->TabIndex = 32;
			// 
			// d4
			// 
			this->d4->AutoSize = true;
			this->d4->Location = System::Drawing::Point(204, 141);
			this->d4->Name = L"d4";
			this->d4->Size = System::Drawing::Size(25, 13);
			this->d4->TabIndex = 31;
			this->d4->Text = L"d = ";
			// 
			// c4
			// 
			this->c4->AutoSize = true;
			this->c4->Location = System::Drawing::Point(146, 141);
			this->c4->Name = L"c4";
			this->c4->Size = System::Drawing::Size(13, 13);
			this->c4->TabIndex = 30;
			this->c4->Text = L"c";
			// 
			// boxB4
			// 
			this->boxB4->Location = System::Drawing::Point(104, 138);
			this->boxB4->Name = L"boxB4";
			this->boxB4->Size = System::Drawing::Size(39, 20);
			this->boxB4->TabIndex = 29;
			// 
			// b4
			// 
			this->b4->AutoSize = true;
			this->b4->Location = System::Drawing::Point(88, 141);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(13, 13);
			this->b4->TabIndex = 28;
			this->b4->Text = L"b";
			// 
			// boxA4
			// 
			this->boxA4->Location = System::Drawing::Point(46, 138);
			this->boxA4->Name = L"boxA4";
			this->boxA4->Size = System::Drawing::Size(39, 20);
			this->boxA4->TabIndex = 27;
			// 
			// a4
			// 
			this->a4->AutoSize = true;
			this->a4->Location = System::Drawing::Point(31, 141);
			this->a4->Name = L"a4";
			this->a4->Size = System::Drawing::Size(13, 13);
			this->a4->TabIndex = 26;
			this->a4->Text = L"a";
			// 
			// boxD3
			// 
			this->boxD3->Location = System::Drawing::Point(232, 99);
			this->boxD3->Name = L"boxD3";
			this->boxD3->Size = System::Drawing::Size(39, 20);
			this->boxD3->TabIndex = 25;
			// 
			// boxC3
			// 
			this->boxC3->Location = System::Drawing::Point(162, 99);
			this->boxC3->Name = L"boxC3";
			this->boxC3->Size = System::Drawing::Size(39, 20);
			this->boxC3->TabIndex = 24;
			// 
			// d3
			// 
			this->d3->AutoSize = true;
			this->d3->Location = System::Drawing::Point(204, 102);
			this->d3->Name = L"d3";
			this->d3->Size = System::Drawing::Size(25, 13);
			this->d3->TabIndex = 23;
			this->d3->Text = L"d = ";
			// 
			// c3
			// 
			this->c3->AutoSize = true;
			this->c3->Location = System::Drawing::Point(146, 102);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(13, 13);
			this->c3->TabIndex = 22;
			this->c3->Text = L"c";
			// 
			// boxB3
			// 
			this->boxB3->Location = System::Drawing::Point(104, 99);
			this->boxB3->Name = L"boxB3";
			this->boxB3->Size = System::Drawing::Size(39, 20);
			this->boxB3->TabIndex = 21;
			// 
			// b3
			// 
			this->b3->AutoSize = true;
			this->b3->Location = System::Drawing::Point(88, 102);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(13, 13);
			this->b3->TabIndex = 20;
			this->b3->Text = L"b";
			// 
			// boxA3
			// 
			this->boxA3->Location = System::Drawing::Point(46, 99);
			this->boxA3->Name = L"boxA3";
			this->boxA3->Size = System::Drawing::Size(39, 20);
			this->boxA3->TabIndex = 19;
			// 
			// a3
			// 
			this->a3->AutoSize = true;
			this->a3->Location = System::Drawing::Point(31, 102);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(13, 13);
			this->a3->TabIndex = 18;
			this->a3->Text = L"a";
			// 
			// boxD2
			// 
			this->boxD2->Location = System::Drawing::Point(232, 60);
			this->boxD2->Name = L"boxD2";
			this->boxD2->Size = System::Drawing::Size(39, 20);
			this->boxD2->TabIndex = 17;
			// 
			// boxC2
			// 
			this->boxC2->Location = System::Drawing::Point(162, 60);
			this->boxC2->Name = L"boxC2";
			this->boxC2->Size = System::Drawing::Size(39, 20);
			this->boxC2->TabIndex = 16;
			// 
			// d2
			// 
			this->d2->AutoSize = true;
			this->d2->Location = System::Drawing::Point(204, 63);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(25, 13);
			this->d2->TabIndex = 15;
			this->d2->Text = L"d = ";
			// 
			// c2
			// 
			this->c2->AutoSize = true;
			this->c2->Location = System::Drawing::Point(146, 63);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(13, 13);
			this->c2->TabIndex = 14;
			this->c2->Text = L"c";
			// 
			// boxB2
			// 
			this->boxB2->Location = System::Drawing::Point(104, 60);
			this->boxB2->Name = L"boxB2";
			this->boxB2->Size = System::Drawing::Size(39, 20);
			this->boxB2->TabIndex = 13;
			// 
			// b2
			// 
			this->b2->AutoSize = true;
			this->b2->Location = System::Drawing::Point(88, 63);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(13, 13);
			this->b2->TabIndex = 12;
			this->b2->Text = L"b";
			// 
			// boxA2
			// 
			this->boxA2->Location = System::Drawing::Point(46, 60);
			this->boxA2->Name = L"boxA2";
			this->boxA2->Size = System::Drawing::Size(39, 20);
			this->boxA2->TabIndex = 11;
			// 
			// a2
			// 
			this->a2->AutoSize = true;
			this->a2->Location = System::Drawing::Point(31, 63);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(13, 13);
			this->a2->TabIndex = 10;
			this->a2->Text = L"a";
			// 
			// boxD1
			// 
			this->boxD1->Location = System::Drawing::Point(232, 23);
			this->boxD1->Name = L"boxD1";
			this->boxD1->Size = System::Drawing::Size(39, 20);
			this->boxD1->TabIndex = 7;
			// 
			// boxC1
			// 
			this->boxC1->Location = System::Drawing::Point(162, 23);
			this->boxC1->Name = L"boxC1";
			this->boxC1->Size = System::Drawing::Size(39, 20);
			this->boxC1->TabIndex = 6;
			// 
			// d1
			// 
			this->d1->AutoSize = true;
			this->d1->Location = System::Drawing::Point(204, 26);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(25, 13);
			this->d1->TabIndex = 5;
			this->d1->Text = L"d = ";
			// 
			// c1
			// 
			this->c1->AutoSize = true;
			this->c1->Location = System::Drawing::Point(146, 26);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(13, 13);
			this->c1->TabIndex = 4;
			this->c1->Text = L"c";
			// 
			// boxB1
			// 
			this->boxB1->Location = System::Drawing::Point(104, 23);
			this->boxB1->Name = L"boxB1";
			this->boxB1->Size = System::Drawing::Size(39, 20);
			this->boxB1->TabIndex = 3;
			// 
			// b1
			// 
			this->b1->AutoSize = true;
			this->b1->Location = System::Drawing::Point(88, 26);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(13, 13);
			this->b1->TabIndex = 2;
			this->b1->Text = L"b";
			// 
			// boxA1
			// 
			this->boxA1->Location = System::Drawing::Point(46, 23);
			this->boxA1->Name = L"boxA1";
			this->boxA1->Size = System::Drawing::Size(39, 20);
			this->boxA1->TabIndex = 1;
			// 
			// a1
			// 
			this->a1->AutoSize = true;
			this->a1->Location = System::Drawing::Point(31, 26);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(13, 13);
			this->a1->TabIndex = 0;
			this->a1->Text = L"a";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(816, 397);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Інтерполяційний поліном за методом складання системи";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double x0, h = 0.1;
	this->chart1->Series[0]->Points->Clear();
	x0 = System::Convert::ToDouble(this->boxX0->Text);

	double** a, * y, * x;
	int n = 4;
	a = new double* [n];
	y = new double[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new double[n];
		for (int j = 0; j < 4; j++)
		{
			if (i == 0) {
				if (j == 0) {
					a[i][j] = System::Convert::ToDouble(this->boxA1->Text);
				}
				else if (j == 1) {
					a[i][j] = System::Convert::ToDouble(this->boxB1->Text);
				}
				else if (j == 2) {
					a[i][j] = System::Convert::ToDouble(this->boxC1->Text);
				}
				else if (j == 3) {
					a[i][j] = 1;
				}
			}
			else if (i == 1) {
				if (j == 0) {
					a[i][j] = System::Convert::ToDouble(this->boxA2->Text);
				}
				else if (j == 1) {
					a[i][j] = System::Convert::ToDouble(this->boxB2->Text);
				}
				else if (j == 2) {
					a[i][j] = System::Convert::ToDouble(this->boxC2->Text);
				}
				else if (j == 3) {
					a[i][j] = 1;
				}
			}
			else if (i == 2) {
				if (j == 0) {
					a[i][j] = System::Convert::ToDouble(this->boxA3->Text);
				}
				else if (j == 1) {
					a[i][j] = System::Convert::ToDouble(this->boxB3->Text);
				}
				else if (j == 2) {
					a[i][j] = System::Convert::ToDouble(this->boxC3->Text);
				}
				else if (j == 3) {
					a[i][j] = 1;
				}
			}
			else if (i == 3) {
				if (j == 0) {
					a[i][j] = System::Convert::ToDouble(this->boxA4->Text);
				}
				else if (j == 1) {
					a[i][j] = System::Convert::ToDouble(this->boxB4->Text);
				}
				else if (j == 2) {
					a[i][j] = System::Convert::ToDouble(this->boxC4->Text);
				}
				else if (j == 3) {
					a[i][j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0) {
			y[i] = System::Convert::ToDouble(this->boxD1->Text);
		}
		else if (i == 1) {
			y[i] = System::Convert::ToDouble(this->boxD2->Text);
		}
		else if (i == 2) {
			y[i] = System::Convert::ToDouble(this->boxD3->Text);
		}
		else if (i == 3) {
			y[i] = System::Convert::ToDouble(this->boxD4->Text);
		}
	}
	x = gauss(a, y, n);

	double res = x[0] * pow(x0, 3) + x[1] * pow(x0, 2) + x[2] * x0 + x[3];

	this->res->Text = System::Convert::ToString(round(x[0] * 100) / 100) + " * x^3 + " + System::Convert::ToString(round(x[1] * 100) / 100) + " * x^2 + " + System::Convert::ToString(round(x[2] * 100) / 100) + " * x + " + System::Convert::ToString(round(x[3] * 100) / 100) + " = " + System::Convert::ToString(round(res * 100) / 100);

	int xgraph[4] = { System::Convert::ToDouble(this->boxC1->Text), System::Convert::ToDouble(this->boxC2->Text), System::Convert::ToDouble(this->boxC3->Text), System::Convert::ToDouble(this->boxC4->Text) };
	int ygraph[4] = { System::Convert::ToDouble(this->boxD1->Text), System::Convert::ToDouble(this->boxD2->Text), System::Convert::ToDouble(this->boxD3->Text), System::Convert::ToDouble(this->boxD4->Text) };

	for (int i = 0; i < 4; i++) {
		this->chart1->Series[0]->Points->AddXY(xgraph[i], ygraph[i]);
	}
}
};
}

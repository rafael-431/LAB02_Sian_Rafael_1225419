#pragma once
#include <vector>
#include<stdlib.h>
#include<cstdlib>
#include<math.h>
namespace Lab2TojRafael1225419 {

	static int VCarrera[71];
	static int Vtortuga[11] = {0,3,3,3,3,3,-6,-6,1,1,1};
	static int Vliebre[11] = {0,0,0,9,9,-12,1,1,1,-2,-2};
	//static int prueba[11] = { 10,9,8,7,6,5,4,3,2,1,0 };
	static int conteo;
	static int* Intor;
	static int* InLie;
	static int* Final;
	static int NumRandomTor;
	static int NumRandomLie;
	static int NumRandomTodos;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Carrera
	/// </summary>
	public ref class Carrera : public System::Windows::Forms::Form
	{
	public:
		Carrera(void)
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
		~Carrera()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Timer^ Temp;
	private: System::Windows::Forms::Label^ LInicio;
	private: System::Windows::Forms::Label^ Lresultado;
	private: System::Windows::Forms::Label^ Ltocan;
	private: System::Windows::Forms::Label^ label1;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Temp = (gcnew System::Windows::Forms::Timer(this->components));
			this->LInicio = (gcnew System::Windows::Forms::Label());
			this->Lresultado = (gcnew System::Windows::Forms::Label());
			this->Ltocan = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Location = System::Drawing::Point(325, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 90);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Empezar carrera";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Carrera::button1_Click);
			// 
			// Temp
			// 
			this->Temp->Interval = 500;
			this->Temp->Tick += gcnew System::EventHandler(this, &Carrera::Temp_Tick);
			// 
			// LInicio
			// 
			this->LInicio->AutoSize = true;
			this->LInicio->Location = System::Drawing::Point(347, 106);
			this->LInicio->Name = L"LInicio";
			this->LInicio->Size = System::Drawing::Size(37, 17);
			this->LInicio->TabIndex = 2;
			this->LInicio->Text = L"Inico";
			// 
			// Lresultado
			// 
			this->Lresultado->AutoSize = true;
			this->Lresultado->Location = System::Drawing::Point(322, 242);
			this->Lresultado->Name = L"Lresultado";
			this->Lresultado->Size = System::Drawing::Size(155, 17);
			this->Lresultado->TabIndex = 3;
			this->Lresultado->Text = L"Recorrido de la carrera";
			// 
			// Ltocan
			// 
			this->Ltocan->AutoSize = true;
			this->Ltocan->Location = System::Drawing::Point(47, 231);
			this->Ltocan->Name = L"Ltocan";
			this->Ltocan->Size = System::Drawing::Size(79, 17);
			this->Ltocan->TabIndex = 4;
			this->Ltocan->Text = L"Si se topan";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(194, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"CARRERA DE TORTUGA VS LIEBRE";
			// 
			// Carrera
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(818, 495);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Ltocan);
			this->Controls->Add(this->Lresultado);
			this->Controls->Add(this->LInicio);
			this->Controls->Add(this->button1);
			this->Name = L"Carrera";
			this->Text = L"Carrera";
			this->Load += gcnew System::EventHandler(this, &Carrera::Carrera_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		void carrera() { // Para llevar el control  le asigne el valor de la casilla 
			int tamaño = 71;
			for (size_t i = 1; i < tamaño; i++)
			{
				VCarrera[i] = i;
			}		
		
		}

		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		LInicio->Text = "¡BANG \n" + "!Y ARRANCAN!";

		conteo = 0;
	
		Temp->Start();	
	
	}
	

private: System::Void Temp_Tick(System::Object^ sender, System::EventArgs^ e) {
	conteo++;	


	
	if (conteo <21)
	{
		int valorPosTor;// Obtener valor de la posiciòn para tortuga
		int valorPosLie;// Obtener valor de la posiciòn para Liebre
	

		NumRandomLie = ((rand() % 10) + 1);
	
		NumRandomTor = ((rand() % 10) + 1);


		Intor = Intor + Vtortuga[NumRandomTor];
		InLie = InLie + Vliebre[NumRandomLie];

		


		//Inicia codigo para verificar si resbalan fuera del inicio (1) por lo cual lo deben regresar a el
		if (valorPosTor < Vtortuga[NumRandomTor]&& valorPosLie< Vliebre[NumRandomLie])
		{
			//Intor = & VCarrera[1]; // si ambos se les vayta a restar un vaor mayo al valor en que esta yso hara que los mande  a la posicon 1 de las 70 (osea al inicio)
			//InLie= &VCarrera[1];
			
			valorPosTor = 1;
			valorPosLie = 1;
		}
		else if (valorPosTor < Vtortuga[NumRandomTor])
		{
		
			//valorPosTor = 1;

			Intor = &VCarrera[1];

		}
		else if (valorPosLie < Vliebre[NumRandomLie])
		{
	
			//InLie = &VCarrera[1];

			valorPosLie = 1;
		}
		 //Finalizacion de codigo de rebalamiento

		valorPosTor = *Intor;
		valorPosLie = *InLie;


		//Inicio de codigo de victorias y/o empate
		if (valorPosTor==70&&valorPosLie==70)
		{
			MessageBox::Show("Es un empate, una excelente carrera");
			Temp->Stop();
		}else if (valorPosTor==70)
		{
			
			MessageBox::Show("¡lA TORTUGA GANA!\n" + "¡BRAVO!");
			Temp->Stop();
		}
		else if (valorPosLie == 70)
		{
			MessageBox::Show("¡La liebre gana!\n" + "¡Ni hablar!");
			Temp->Stop();
		}

		//Finalizacion de codigo de victoria y/o empate
		Lresultado->Text = "L en posiciòn: " + valorPosLie + "\n La toruga esta en la posicion" + valorPosTor; // Siempre la posiciòn de la tortuga 
		

		if (valorPosTor== valorPosLie)
		{
			Ltocan->Text = ("¡OUCH!" + "LA TORTUGA A MORDIDA A LA LIEBRE EN LA POSICION" + valorPosTor); // Condicion si se topan
		}


	}
	else if (conteo>20)
	{
		Lresultado->Text = "Ninguno ha completado la carrera en el tiempo de 20 segundos\n"+ "Presione el boton nuevamente para que siga la carrera";
		Temp->Stop();
		conteo = 0;
	}
}

private: System::Void Carrera_Load(System::Object^ sender, System::EventArgs^ e) {// Cada vez que se cargue el formo llamara al metodo "carrera" para llenar datos

	carrera();
	Intor = &VCarrera[1];
	InLie = &VCarrera[1];
	Final = &VCarrera[70];



}
};
}

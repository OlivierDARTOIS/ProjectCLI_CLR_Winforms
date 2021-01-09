#pragma once

// Dessin dans un widget de formes
// https://www.godo.dev/tutorials/cpp-dotnet-draw-2d-primitive/

namespace ProjectCLICLRWinforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			b1 = Brushes::DarkGreen;
			b2 = Brushes::DarkBlue;
			b3 = Brushes::DarkRed;
			b4 = Brushes::LightYellow;
			chgtCouleur = false;
			cpt = 0;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete b1;
			delete b2;
			delete b3;
			delete b4;
		}
	private: System::Windows::Forms::Button^ buttonQuitter;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonChgtCouleur;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>

		Brush^ b1, ^ b2, ^ b3, ^ b4;
		bool chgtCouleur;
		int cpt;

	private: System::Windows::Forms::Button^ buttonActivationTimer;
	private: System::Windows::Forms::Timer^ timer1;
		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->buttonQuitter = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonChgtCouleur = (gcnew System::Windows::Forms::Button());
			this->buttonActivationTimer = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonQuitter
			// 
			this->buttonQuitter->Location = System::Drawing::Point(662, 438);
			this->buttonQuitter->Name = L"buttonQuitter";
			this->buttonQuitter->Size = System::Drawing::Size(208, 79);
			this->buttonQuitter->TabIndex = 0;
			this->buttonQuitter->Text = L"Quitter";
			this->buttonQuitter->UseVisualStyleBackColor = true;
			this->buttonQuitter->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pictureBox1->Location = System::Drawing::Point(32, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(422, 393);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// buttonChgtCouleur
			// 
			this->buttonChgtCouleur->Location = System::Drawing::Point(662, 53);
			this->buttonChgtCouleur->Name = L"buttonChgtCouleur";
			this->buttonChgtCouleur->Size = System::Drawing::Size(208, 84);
			this->buttonChgtCouleur->TabIndex = 4;
			this->buttonChgtCouleur->Text = L"Chgt Couleur";
			this->buttonChgtCouleur->UseVisualStyleBackColor = true;
			this->buttonChgtCouleur->Click += gcnew System::EventHandler(this, &MyForm::buttonChgtCouleur_Click);
			// 
			// buttonActivationTimer
			// 
			this->buttonActivationTimer->Location = System::Drawing::Point(662, 235);
			this->buttonActivationTimer->Name = L"buttonActivationTimer";
			this->buttonActivationTimer->Size = System::Drawing::Size(208, 94);
			this->buttonActivationTimer->TabIndex = 5;
			this->buttonActivationTimer->Text = L"Activation Timer";
			this->buttonActivationTimer->UseVisualStyleBackColor = true;
			this->buttonActivationTimer->Click += gcnew System::EventHandler(this, &MyForm::buttonActivationTimer_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 562);
			this->Controls->Add(this->buttonActivationTimer);
			this->Controls->Add(this->buttonChgtCouleur);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonQuitter);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Test_ProjMemory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;

		//remplissage d'une ellipse en blanc, en 10,10 de rayon en x et y 50,50
		g->FillEllipse(b1, 15, 15, 50, 50);
		//la bordure noire autour du cercle précédent 
		g->DrawEllipse(Pens::Black, 15, 15, 50, 50);

		g->FillEllipse(b2, 80, 15, 50, 50);
		g->DrawEllipse(Pens::Black, 80, 15, 50, 50);

		g->FillEllipse(b3, 15, 80, 50, 50);
		g->DrawEllipse(Pens::Black, 15, 80, 50, 50);

		g->FillEllipse(b4, 80, 80, 50, 50);
		g->DrawEllipse(Pens::Black, 80, 80, 50, 50);
	}

	private: System::Void buttonChgtCouleur_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!chgtCouleur) {
			b1 = Brushes::Green;
			b2 = Brushes::Blue;
			b3 = Brushes::Red;
			b4 = Brushes::Yellow;
		}
		else {
			b1 = Brushes::DarkGreen;
			b2 = Brushes::DarkBlue;
			b3 = Brushes::DarkRed;
			b4 = Brushes::LightYellow;
		}
		this->Refresh();
		chgtCouleur = !chgtCouleur;
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	switch (cpt) {
	case 0:
		b1 = Brushes::Green;
		b4 = Brushes::LightYellow;
		break;
	case 1:
		b2 = Brushes::Blue;
		b1 = Brushes::DarkGreen;
		break;
	case 2:
		b3 = Brushes::Red;
		b2 = Brushes::DarkBlue;
		break;
	case 3:
		b4 = Brushes::Yellow;
		b3 = Brushes::DarkRed;
		break;
		}
	cpt++;
	if (cpt == 4) cpt = 0;
	this->Refresh();
}

private: System::Void buttonActivationTimer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonActivationTimer->Text == "Activation Timer") {
		timer1->Start();
		buttonChgtCouleur->Hide();
		buttonActivationTimer->Text = "Arrêt Timer";
	}
	else {
		timer1->Stop();
		buttonChgtCouleur->Show();
		buttonActivationTimer->Text = "Activation Timer";
	}
}
};
}

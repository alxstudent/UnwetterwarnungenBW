#pragma once
#include "Warnungen.h"

namespace Abschlussprojekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			warnungenBW = gcnew List<Warnungen^>;
			warnungenBY = gcnew List<Warnungen^>;
			warnungenBE = gcnew List<Warnungen^>;
			warnungenBB = gcnew List<Warnungen^>;
			warnungenHB = gcnew List<Warnungen^>;
			warnungenHH = gcnew List<Warnungen^>;
			warnungenHE = gcnew List<Warnungen^>;
			warnungenMV = gcnew List<Warnungen^>;
			warnungenNI = gcnew List<Warnungen^>;
			warnungenNW = gcnew List<Warnungen^>;
			warnungenRP = gcnew List<Warnungen^>;
			warnungenSL = gcnew List<Warnungen^>;
			warnungenSN = gcnew List<Warnungen^>;
			warnungenST = gcnew List<Warnungen^>;
			warnungenSH = gcnew List<Warnungen^>;
			warnungenTH = gcnew List<Warnungen^>;

			bundeslandBW = "Baden-Württemberg";
			bundeslandBY = "Bayern";
			bundeslandBE = "Berlin";
			bundeslandBB = "Brandenburg";
			bundeslandHB = "Bremen";
			bundeslandHH = "Hamburg";
			bundeslandHE = "Hessen";
			bundeslandMV = "Mecklenburg-Vorpommern";
			bundeslandNI = "Niedersachsen";
			bundeslandNW = "Nordrhein-Westfalen";
			bundeslandRP = "Rheinland-Pfalz";
			bundeslandSL = "Saarland";
			bundeslandSN = "Sachsen";
			bundeslandST = "Sachsen-Anhalt";
			bundeslandSH = "Schleswig-Holstein";
			bundeslandTH = "Thüringen";
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}

		List<Warnungen^>^ warnungenBW; // zum attribut gemacht fürs Hauptfenster. diese daten sind dann "global" verfügbar
		List<Warnungen^>^ warnungenBY;
		List<Warnungen^>^ warnungenBE;
		List<Warnungen^>^ warnungenBB;
		List<Warnungen^>^ warnungenHB;
		List<Warnungen^>^ warnungenHH;
		List<Warnungen^>^ warnungenHE;
		List<Warnungen^>^ warnungenMV;
		List<Warnungen^>^ warnungenNI;
		List<Warnungen^>^ warnungenNW;
		List<Warnungen^>^ warnungenRP;
		List<Warnungen^>^ warnungenSL;
		List<Warnungen^>^ warnungenSN;
		List<Warnungen^>^ warnungenST;
		List<Warnungen^>^ warnungenSH;
		List<Warnungen^>^ warnungenTH;

		String^ bundeslandBW; //Bundesland
		String^ bundeslandBY;
		String^ bundeslandBE;
		String^ bundeslandBB;
		String^ bundeslandHB;
		String^ bundeslandHH;
		String^ bundeslandHE;
		String^ bundeslandMV;
		String^ bundeslandNI;
		String^ bundeslandNW;
		String^ bundeslandRP;
		String^ bundeslandSL;
		String^ bundeslandSN;
		String^ bundeslandST;
		String^ bundeslandSH;
		String^ bundeslandTH;

	private: System::Windows::Forms::Panel^ panel_KarteBW;
	private: System::Windows::Forms::Button^ button_KarteLeeren;
	private: System::Windows::Forms::TextBox^ textBox_StadtKoordinaten;

	private: System::Windows::Forms::Button^ button_unwetterWarnungenAktualisieren;

	private: System::Windows::Forms::Label^ label_StadtAuswaehlen;
	private: System::Windows::Forms::TextBox^ textBox_StadtAuswahl;
	private: System::Windows::Forms::Button^ button_InfosZuStadtAnzeigen;
	private: System::Windows::Forms::Button^ button_InfosHeidelberg;
	private: System::Windows::Forms::Button^ button_InfosKarlsruhe;
	private: System::Windows::Forms::Button^ button_InfosFreiburg;
	private: System::Windows::Forms::Button^ button_InfosStuttgart;
	private: System::Windows::Forms::Button^ button_InfosTuebingen;
	private: System::Windows::Forms::PictureBox^ pictureBox_Windboeen;
	private: System::Windows::Forms::PictureBox^ pictureBox_Frost;

	private: System::Windows::Forms::PictureBox^ pictureBox_Schnee;

	private: System::Windows::Forms::PictureBox^ pictureBox_Sturmboeen;
	private: System::Windows::Forms::PictureBox^ pictureBox_Glaette;
	private: System::Windows::Forms::PictureBox^ pictureBox_Regen;
	private: System::Windows::Forms::PictureBox^ pictureBox_Gewitter;
	private: System::Windows::Forms::PictureBox^ pictureBox_WetterOK;
	private: System::Windows::Forms::Panel^ panel_UnwetterwarnungenKarten;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteBW;
	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteBB;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteBE;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteBY;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteTH;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteSH;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteST;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteSN;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteSL;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteRP;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteNW;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteNI;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteMV;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteHE;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteHH;

	private: System::Windows::Forms::Button^ button_UnwetterwarnungenKarteHB;
	private: System::Windows::Forms::Panel^ panel_radioButtons;

	private: System::Windows::Forms::RadioButton^ radioButton_AlleWarnungen;
	private: System::Windows::Forms::RadioButton^ radioButton_Gewitter;
	private: System::Windows::Forms::RadioButton^ radioButton_Sturm;
	private: System::Windows::Forms::RadioButton^ radioButton_UV;

	private: System::Windows::Forms::RadioButton^ radioButton_Hitze;

	private: System::Windows::Forms::RadioButton^ radioButton_Glaette;

	private: System::Windows::Forms::RadioButton^ radioButton_Schnee;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button_InfosKonstanz;
	private: System::Windows::Forms::PictureBox^ pictureBox_wappenBundesland;
	private: System::Windows::Forms::Label^ label_beschriftungWappen;
	private: System::Windows::Forms::Panel^ panel_anzeigeLinks;
	private: System::Windows::Forms::PictureBox^ pictureBox_warnstufen;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel3;




	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->panel_KarteBW = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_warnstufen = (gcnew System::Windows::Forms::PictureBox());
			this->label_beschriftungWappen = (gcnew System::Windows::Forms::Label());
			this->pictureBox_wappenBundesland = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_WetterOK = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Glaette = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Regen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Gewitter = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Frost = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Schnee = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Sturmboeen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_Windboeen = (gcnew System::Windows::Forms::PictureBox());
			this->button_KarteLeeren = (gcnew System::Windows::Forms::Button());
			this->textBox_StadtKoordinaten = (gcnew System::Windows::Forms::TextBox());
			this->button_unwetterWarnungenAktualisieren = (gcnew System::Windows::Forms::Button());
			this->label_StadtAuswaehlen = (gcnew System::Windows::Forms::Label());
			this->textBox_StadtAuswahl = (gcnew System::Windows::Forms::TextBox());
			this->button_InfosZuStadtAnzeigen = (gcnew System::Windows::Forms::Button());
			this->button_InfosHeidelberg = (gcnew System::Windows::Forms::Button());
			this->button_InfosKarlsruhe = (gcnew System::Windows::Forms::Button());
			this->button_InfosFreiburg = (gcnew System::Windows::Forms::Button());
			this->button_InfosStuttgart = (gcnew System::Windows::Forms::Button());
			this->button_InfosTuebingen = (gcnew System::Windows::Forms::Button());
			this->panel_UnwetterwarnungenKarten = (gcnew System::Windows::Forms::Panel());
			this->panel_anzeigeLinks = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_radioButtons = (gcnew System::Windows::Forms::Panel());
			this->radioButton_Sturm = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_UV = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Hitze = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Glaette = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Schnee = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_AlleWarnungen = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Gewitter = (gcnew System::Windows::Forms::RadioButton());
			this->button_UnwetterwarnungenKarteTH = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteSH = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteST = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteSN = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteSL = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteRP = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteNW = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteNI = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteMV = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteHE = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteHH = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteHB = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteBB = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteBE = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteBY = (gcnew System::Windows::Forms::Button());
			this->button_UnwetterwarnungenKarteBW = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_InfosKonstanz = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel_KarteBW->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_warnstufen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_wappenBundesland))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_WetterOK))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Glaette))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Regen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Gewitter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Frost))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Schnee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Sturmboeen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Windboeen))->BeginInit();
			this->panel_UnwetterwarnungenKarten->SuspendLayout();
			this->panel_radioButtons->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_KarteBW
			// 
			this->panel_KarteBW->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_KarteBW->BackColor = System::Drawing::Color::Yellow;
			this->panel_KarteBW->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_KarteBW.BackgroundImage")));
			this->panel_KarteBW->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel_KarteBW->Controls->Add(this->pictureBox_warnstufen);
			this->panel_KarteBW->Controls->Add(this->label_beschriftungWappen);
			this->panel_KarteBW->Controls->Add(this->pictureBox_wappenBundesland);
			this->panel_KarteBW->Controls->Add(this->pictureBox_WetterOK);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Glaette);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Regen);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Gewitter);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Frost);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Schnee);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Sturmboeen);
			this->panel_KarteBW->Controls->Add(this->pictureBox_Windboeen);
			this->panel_KarteBW->Location = System::Drawing::Point(4, 12);
			this->panel_KarteBW->Name = L"panel_KarteBW";
			this->panel_KarteBW->Size = System::Drawing::Size(676, 802);
			this->panel_KarteBW->TabIndex = 0;
			// 
			// pictureBox_warnstufen
			// 
			this->pictureBox_warnstufen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_warnstufen.BackgroundImage")));
			this->pictureBox_warnstufen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox_warnstufen->Location = System::Drawing::Point(3, 702);
			this->pictureBox_warnstufen->Name = L"pictureBox_warnstufen";
			this->pictureBox_warnstufen->Size = System::Drawing::Size(347, 96);
			this->pictureBox_warnstufen->TabIndex = 13;
			this->pictureBox_warnstufen->TabStop = false;
			this->pictureBox_warnstufen->Visible = false;
			// 
			// label_beschriftungWappen
			// 
			this->label_beschriftungWappen->AutoSize = true;
			this->label_beschriftungWappen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_beschriftungWappen->Location = System::Drawing::Point(498, 179);
			this->label_beschriftungWappen->Name = L"label_beschriftungWappen";
			this->label_beschriftungWappen->Size = System::Drawing::Size(52, 17);
			this->label_beschriftungWappen->TabIndex = 12;
			this->label_beschriftungWappen->Text = L"label2";
			this->label_beschriftungWappen->Visible = false;
			// 
			// pictureBox_wappenBundesland
			// 
			this->pictureBox_wappenBundesland->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox_wappenBundesland->Location = System::Drawing::Point(501, 78);
			this->pictureBox_wappenBundesland->Name = L"pictureBox_wappenBundesland";
			this->pictureBox_wappenBundesland->Size = System::Drawing::Size(134, 98);
			this->pictureBox_wappenBundesland->TabIndex = 11;
			this->pictureBox_wappenBundesland->TabStop = false;
			this->pictureBox_wappenBundesland->Visible = false;
			// 
			// pictureBox_WetterOK
			// 
			this->pictureBox_WetterOK->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox_WetterOK->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_WetterOK.Image")));
			this->pictureBox_WetterOK->Location = System::Drawing::Point(93, 50);
			this->pictureBox_WetterOK->Name = L"pictureBox_WetterOK";
			this->pictureBox_WetterOK->Size = System::Drawing::Size(36, 35);
			this->pictureBox_WetterOK->TabIndex = 10;
			this->pictureBox_WetterOK->TabStop = false;
			this->pictureBox_WetterOK->Visible = false;
			// 
			// pictureBox_Glaette
			// 
			this->pictureBox_Glaette->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Glaette->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Glaette.Image")));
			this->pictureBox_Glaette->Location = System::Drawing::Point(9, 91);
			this->pictureBox_Glaette->Name = L"pictureBox_Glaette";
			this->pictureBox_Glaette->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Glaette->TabIndex = 9;
			this->pictureBox_Glaette->TabStop = false;
			this->pictureBox_Glaette->Visible = false;
			// 
			// pictureBox_Regen
			// 
			this->pictureBox_Regen->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Regen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Regen.Image")));
			this->pictureBox_Regen->Location = System::Drawing::Point(9, 50);
			this->pictureBox_Regen->Name = L"pictureBox_Regen";
			this->pictureBox_Regen->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Regen->TabIndex = 8;
			this->pictureBox_Regen->TabStop = false;
			this->pictureBox_Regen->Visible = false;
			// 
			// pictureBox_Gewitter
			// 
			this->pictureBox_Gewitter->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Gewitter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Gewitter.Image")));
			this->pictureBox_Gewitter->Location = System::Drawing::Point(51, 50);
			this->pictureBox_Gewitter->Name = L"pictureBox_Gewitter";
			this->pictureBox_Gewitter->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Gewitter->TabIndex = 7;
			this->pictureBox_Gewitter->TabStop = false;
			this->pictureBox_Gewitter->Visible = false;
			// 
			// pictureBox_Frost
			// 
			this->pictureBox_Frost->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Frost->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Frost.Image")));
			this->pictureBox_Frost->Location = System::Drawing::Point(93, 91);
			this->pictureBox_Frost->Name = L"pictureBox_Frost";
			this->pictureBox_Frost->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Frost->TabIndex = 6;
			this->pictureBox_Frost->TabStop = false;
			this->pictureBox_Frost->Visible = false;
			// 
			// pictureBox_Schnee
			// 
			this->pictureBox_Schnee->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Schnee->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Schnee.Image")));
			this->pictureBox_Schnee->Location = System::Drawing::Point(51, 91);
			this->pictureBox_Schnee->Name = L"pictureBox_Schnee";
			this->pictureBox_Schnee->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Schnee->TabIndex = 5;
			this->pictureBox_Schnee->TabStop = false;
			this->pictureBox_Schnee->Visible = false;
			// 
			// pictureBox_Sturmboeen
			// 
			this->pictureBox_Sturmboeen->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Sturmboeen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Sturmboeen.Image")));
			this->pictureBox_Sturmboeen->Location = System::Drawing::Point(51, 9);
			this->pictureBox_Sturmboeen->Name = L"pictureBox_Sturmboeen";
			this->pictureBox_Sturmboeen->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Sturmboeen->TabIndex = 2;
			this->pictureBox_Sturmboeen->TabStop = false;
			this->pictureBox_Sturmboeen->Visible = false;
			// 
			// pictureBox_Windboeen
			// 
			this->pictureBox_Windboeen->BackColor = System::Drawing::Color::Tomato;
			this->pictureBox_Windboeen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Windboeen.Image")));
			this->pictureBox_Windboeen->Location = System::Drawing::Point(9, 9);
			this->pictureBox_Windboeen->Name = L"pictureBox_Windboeen";
			this->pictureBox_Windboeen->Size = System::Drawing::Size(36, 35);
			this->pictureBox_Windboeen->TabIndex = 1;
			this->pictureBox_Windboeen->TabStop = false;
			this->pictureBox_Windboeen->Visible = false;
			// 
			// button_KarteLeeren
			// 
			this->button_KarteLeeren->BackColor = System::Drawing::Color::LightCoral;
			this->button_KarteLeeren->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_KarteLeeren->Location = System::Drawing::Point(858, 206);
			this->button_KarteLeeren->Name = L"button_KarteLeeren";
			this->button_KarteLeeren->Size = System::Drawing::Size(50, 34);
			this->button_KarteLeeren->TabIndex = 1;
			this->button_KarteLeeren->Text = L"Karte leeren";
			this->button_KarteLeeren->UseVisualStyleBackColor = false;
			this->button_KarteLeeren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_KarteLeeren_Click);
			// 
			// textBox_StadtKoordinaten
			// 
			this->textBox_StadtKoordinaten->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_StadtKoordinaten->Location = System::Drawing::Point(688, 12);
			this->textBox_StadtKoordinaten->Multiline = true;
			this->textBox_StadtKoordinaten->Name = L"textBox_StadtKoordinaten";
			this->textBox_StadtKoordinaten->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_StadtKoordinaten->Size = System::Drawing::Size(244, 228);
			this->textBox_StadtKoordinaten->TabIndex = 2;
			// 
			// button_unwetterWarnungenAktualisieren
			// 
			this->button_unwetterWarnungenAktualisieren->FlatAppearance->BorderSize = 2;
			this->button_unwetterWarnungenAktualisieren->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_unwetterWarnungenAktualisieren->Location = System::Drawing::Point(3, 3);
			this->button_unwetterWarnungenAktualisieren->Name = L"button_unwetterWarnungenAktualisieren";
			this->button_unwetterWarnungenAktualisieren->Size = System::Drawing::Size(91, 85);
			this->button_unwetterWarnungenAktualisieren->TabIndex = 4;
			this->button_unwetterWarnungenAktualisieren->Text = L"Alle Unwetterwar-nungen in BW anzeigen";
			this->button_unwetterWarnungenAktualisieren->UseVisualStyleBackColor = true;
			this->button_unwetterWarnungenAktualisieren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_unwetterWarnungenAktualisieren_Click);
			// 
			// label_StadtAuswaehlen
			// 
			this->label_StadtAuswaehlen->AutoSize = true;
			this->label_StadtAuswaehlen->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label_StadtAuswaehlen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_StadtAuswaehlen->Location = System::Drawing::Point(110, 24);
			this->label_StadtAuswaehlen->Name = L"label_StadtAuswaehlen";
			this->label_StadtAuswaehlen->Size = System::Drawing::Size(255, 17);
			this->label_StadtAuswaehlen->TabIndex = 6;
			this->label_StadtAuswaehlen->Text = L"Stadt in Baden-Württemberg eingeben:";
			// 
			// textBox_StadtAuswahl
			// 
			this->textBox_StadtAuswahl->BackColor = System::Drawing::SystemColors::Info;
			this->textBox_StadtAuswahl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_StadtAuswahl->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->textBox_StadtAuswahl->Location = System::Drawing::Point(109, 44);
			this->textBox_StadtAuswahl->Name = L"textBox_StadtAuswahl";
			this->textBox_StadtAuswahl->Size = System::Drawing::Size(256, 30);
			this->textBox_StadtAuswahl->TabIndex = 7;
			this->textBox_StadtAuswahl->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_InfosZuStadtAnzeigen
			// 
			this->button_InfosZuStadtAnzeigen->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosZuStadtAnzeigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_InfosZuStadtAnzeigen->Location = System::Drawing::Point(371, 24);
			this->button_InfosZuStadtAnzeigen->Name = L"button_InfosZuStadtAnzeigen";
			this->button_InfosZuStadtAnzeigen->Size = System::Drawing::Size(50, 50);
			this->button_InfosZuStadtAnzeigen->TabIndex = 8;
			this->button_InfosZuStadtAnzeigen->Text = L"LOS";
			this->button_InfosZuStadtAnzeigen->UseVisualStyleBackColor = false;
			this->button_InfosZuStadtAnzeigen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// button_InfosHeidelberg
			// 
			this->button_InfosHeidelberg->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosHeidelberg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosHeidelberg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosHeidelberg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosHeidelberg.Image")));
			this->button_InfosHeidelberg->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosHeidelberg->Location = System::Drawing::Point(954, 12);
			this->button_InfosHeidelberg->Name = L"button_InfosHeidelberg";
			this->button_InfosHeidelberg->Size = System::Drawing::Size(158, 33);
			this->button_InfosHeidelberg->TabIndex = 9;
			this->button_InfosHeidelberg->Text = L"Heidelberg";
			this->button_InfosHeidelberg->UseVisualStyleBackColor = false;
			this->button_InfosHeidelberg->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// button_InfosKarlsruhe
			// 
			this->button_InfosKarlsruhe->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosKarlsruhe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosKarlsruhe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosKarlsruhe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosKarlsruhe.Image")));
			this->button_InfosKarlsruhe->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosKarlsruhe->Location = System::Drawing::Point(954, 51);
			this->button_InfosKarlsruhe->Name = L"button_InfosKarlsruhe";
			this->button_InfosKarlsruhe->Size = System::Drawing::Size(158, 33);
			this->button_InfosKarlsruhe->TabIndex = 10;
			this->button_InfosKarlsruhe->Text = L"Karlsruhe";
			this->button_InfosKarlsruhe->UseVisualStyleBackColor = false;
			this->button_InfosKarlsruhe->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// button_InfosFreiburg
			// 
			this->button_InfosFreiburg->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosFreiburg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosFreiburg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosFreiburg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosFreiburg.Image")));
			this->button_InfosFreiburg->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosFreiburg->Location = System::Drawing::Point(954, 129);
			this->button_InfosFreiburg->Name = L"button_InfosFreiburg";
			this->button_InfosFreiburg->Size = System::Drawing::Size(158, 33);
			this->button_InfosFreiburg->TabIndex = 12;
			this->button_InfosFreiburg->Text = L"Freiburg";
			this->button_InfosFreiburg->UseVisualStyleBackColor = false;
			this->button_InfosFreiburg->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// button_InfosStuttgart
			// 
			this->button_InfosStuttgart->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosStuttgart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosStuttgart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosStuttgart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosStuttgart.Image")));
			this->button_InfosStuttgart->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosStuttgart->Location = System::Drawing::Point(954, 90);
			this->button_InfosStuttgart->Name = L"button_InfosStuttgart";
			this->button_InfosStuttgart->Size = System::Drawing::Size(158, 33);
			this->button_InfosStuttgart->TabIndex = 11;
			this->button_InfosStuttgart->Text = L"Stuttgart";
			this->button_InfosStuttgart->UseVisualStyleBackColor = false;
			this->button_InfosStuttgart->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// button_InfosTuebingen
			// 
			this->button_InfosTuebingen->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosTuebingen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosTuebingen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosTuebingen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosTuebingen.Image")));
			this->button_InfosTuebingen->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosTuebingen->Location = System::Drawing::Point(954, 168);
			this->button_InfosTuebingen->Name = L"button_InfosTuebingen";
			this->button_InfosTuebingen->Size = System::Drawing::Size(158, 33);
			this->button_InfosTuebingen->TabIndex = 13;
			this->button_InfosTuebingen->Text = L"Tübingen";
			this->button_InfosTuebingen->UseVisualStyleBackColor = false;
			this->button_InfosTuebingen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// panel_UnwetterwarnungenKarten
			// 
			this->panel_UnwetterwarnungenKarten->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->panel_anzeigeLinks);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->label1);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->panel_radioButtons);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteTH);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteSH);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteST);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteSN);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteSL);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteRP);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteNW);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteNI);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteMV);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteHE);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteHH);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteHB);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteBB);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteBE);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteBY);
			this->panel_UnwetterwarnungenKarten->Controls->Add(this->button_UnwetterwarnungenKarteBW);
			this->panel_UnwetterwarnungenKarten->Location = System::Drawing::Point(688, 340);
			this->panel_UnwetterwarnungenKarten->Name = L"panel_UnwetterwarnungenKarten";
			this->panel_UnwetterwarnungenKarten->Size = System::Drawing::Size(424, 474);
			this->panel_UnwetterwarnungenKarten->TabIndex = 14;
			// 
			// panel_anzeigeLinks
			// 
			this->panel_anzeigeLinks->BackColor = System::Drawing::Color::Aqua;
			this->panel_anzeigeLinks->Location = System::Drawing::Point(12, 144);
			this->panel_anzeigeLinks->Name = L"panel_anzeigeLinks";
			this->panel_anzeigeLinks->Size = System::Drawing::Size(10, 51);
			this->panel_anzeigeLinks->TabIndex = 17;
			this->panel_anzeigeLinks->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 24);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Karten mit aktuellen Warnungen";
			// 
			// panel_radioButtons
			// 
			this->panel_radioButtons->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel_radioButtons->Controls->Add(this->radioButton_Sturm);
			this->panel_radioButtons->Controls->Add(this->radioButton_UV);
			this->panel_radioButtons->Controls->Add(this->radioButton_Hitze);
			this->panel_radioButtons->Controls->Add(this->radioButton_Glaette);
			this->panel_radioButtons->Controls->Add(this->radioButton_Schnee);
			this->panel_radioButtons->Controls->Add(this->radioButton_AlleWarnungen);
			this->panel_radioButtons->Controls->Add(this->radioButton_Gewitter);
			this->panel_radioButtons->Location = System::Drawing::Point(43, 29);
			this->panel_radioButtons->Name = L"panel_radioButtons";
			this->panel_radioButtons->Size = System::Drawing::Size(339, 110);
			this->panel_radioButtons->TabIndex = 17;
			// 
			// radioButton_Sturm
			// 
			this->radioButton_Sturm->AutoSize = true;
			this->radioButton_Sturm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_Sturm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_Sturm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_Sturm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_Sturm.Image")));
			this->radioButton_Sturm->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_Sturm->Location = System::Drawing::Point(127, 75);
			this->radioButton_Sturm->Name = L"radioButton_Sturm";
			this->radioButton_Sturm->Size = System::Drawing::Size(98, 32);
			this->radioButton_Sturm->TabIndex = 22;
			this->radioButton_Sturm->Text = L"Sturm         ";
			this->radioButton_Sturm->UseVisualStyleBackColor = false;
			this->radioButton_Sturm->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// radioButton_UV
			// 
			this->radioButton_UV->AutoSize = true;
			this->radioButton_UV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_UV->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_UV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_UV->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_UV.Image")));
			this->radioButton_UV->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_UV->Location = System::Drawing::Point(240, 75);
			this->radioButton_UV->Name = L"radioButton_UV";
			this->radioButton_UV->Size = System::Drawing::Size(94, 32);
			this->radioButton_UV->TabIndex = 21;
			this->radioButton_UV->Text = L"UV             ";
			this->radioButton_UV->UseVisualStyleBackColor = false;
			this->radioButton_UV->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// radioButton_Hitze
			// 
			this->radioButton_Hitze->AutoSize = true;
			this->radioButton_Hitze->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_Hitze->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_Hitze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_Hitze->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_Hitze.Image")));
			this->radioButton_Hitze->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_Hitze->Location = System::Drawing::Point(240, 37);
			this->radioButton_Hitze->Name = L"radioButton_Hitze";
			this->radioButton_Hitze->Size = System::Drawing::Size(93, 32);
			this->radioButton_Hitze->TabIndex = 20;
			this->radioButton_Hitze->Text = L"Hitze         ";
			this->radioButton_Hitze->UseVisualStyleBackColor = false;
			this->radioButton_Hitze->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// radioButton_Glaette
			// 
			this->radioButton_Glaette->AutoSize = true;
			this->radioButton_Glaette->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_Glaette->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_Glaette->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_Glaette->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_Glaette.Image")));
			this->radioButton_Glaette->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_Glaette->Location = System::Drawing::Point(127, 37);
			this->radioButton_Glaette->Name = L"radioButton_Glaette";
			this->radioButton_Glaette->Size = System::Drawing::Size(98, 32);
			this->radioButton_Glaette->TabIndex = 19;
			this->radioButton_Glaette->Text = L"Glätte         ";
			this->radioButton_Glaette->UseVisualStyleBackColor = false;
			this->radioButton_Glaette->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// radioButton_Schnee
			// 
			this->radioButton_Schnee->AutoSize = true;
			this->radioButton_Schnee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_Schnee->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_Schnee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_Schnee->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_Schnee.Image")));
			this->radioButton_Schnee->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_Schnee->Location = System::Drawing::Point(3, 75);
			this->radioButton_Schnee->Name = L"radioButton_Schnee";
			this->radioButton_Schnee->Size = System::Drawing::Size(108, 32);
			this->radioButton_Schnee->TabIndex = 18;
			this->radioButton_Schnee->Text = L"Schnee         ";
			this->radioButton_Schnee->UseVisualStyleBackColor = false;
			this->radioButton_Schnee->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// radioButton_AlleWarnungen
			// 
			this->radioButton_AlleWarnungen->AutoSize = true;
			this->radioButton_AlleWarnungen->Checked = true;
			this->radioButton_AlleWarnungen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_AlleWarnungen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton_AlleWarnungen->Location = System::Drawing::Point(3, 3);
			this->radioButton_AlleWarnungen->Name = L"radioButton_AlleWarnungen";
			this->radioButton_AlleWarnungen->Size = System::Drawing::Size(125, 19);
			this->radioButton_AlleWarnungen->TabIndex = 17;
			this->radioButton_AlleWarnungen->TabStop = true;
			this->radioButton_AlleWarnungen->Text = L"Alle Warnungen";
			this->radioButton_AlleWarnungen->UseVisualStyleBackColor = true;
			// 
			// radioButton_Gewitter
			// 
			this->radioButton_Gewitter->AutoSize = true;
			this->radioButton_Gewitter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->radioButton_Gewitter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->radioButton_Gewitter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_Gewitter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"radioButton_Gewitter.Image")));
			this->radioButton_Gewitter->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->radioButton_Gewitter->Location = System::Drawing::Point(4, 37);
			this->radioButton_Gewitter->Name = L"radioButton_Gewitter";
			this->radioButton_Gewitter->Size = System::Drawing::Size(109, 32);
			this->radioButton_Gewitter->TabIndex = 16;
			this->radioButton_Gewitter->Text = L"Gewitter        ";
			this->radioButton_Gewitter->UseVisualStyleBackColor = false;
			this->radioButton_Gewitter->CheckedChanged += gcnew System::EventHandler(this, &Hauptfenster::methode_radioButtons_Unwetter);
			// 
			// button_UnwetterwarnungenKarteTH
			// 
			this->button_UnwetterwarnungenKarteTH->AutoSize = true;
			this->button_UnwetterwarnungenKarteTH->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteTH->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteTH->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteTH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteTH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteTH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteTH->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteTH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteTH.Image")));
			this->button_UnwetterwarnungenKarteTH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteTH->Location = System::Drawing::Point(315, 393);
			this->button_UnwetterwarnungenKarteTH->Name = L"button_UnwetterwarnungenKarteTH";
			this->button_UnwetterwarnungenKarteTH->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteTH->TabIndex = 15;
			this->button_UnwetterwarnungenKarteTH->Text = L"TH";
			this->button_UnwetterwarnungenKarteTH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteTH->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteTH->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteSH
			// 
			this->button_UnwetterwarnungenKarteSH->AutoSize = true;
			this->button_UnwetterwarnungenKarteSH->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteSH->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteSH->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteSH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteSH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteSH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteSH->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteSH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteSH.Image")));
			this->button_UnwetterwarnungenKarteSH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteSH->Location = System::Drawing::Point(217, 393);
			this->button_UnwetterwarnungenKarteSH->Name = L"button_UnwetterwarnungenKarteSH";
			this->button_UnwetterwarnungenKarteSH->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteSH->TabIndex = 14;
			this->button_UnwetterwarnungenKarteSH->Text = L"SH";
			this->button_UnwetterwarnungenKarteSH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteSH->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteSH->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteST
			// 
			this->button_UnwetterwarnungenKarteST->AutoSize = true;
			this->button_UnwetterwarnungenKarteST->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteST->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteST->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteST->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteST->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteST->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteST->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteST->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteST.Image")));
			this->button_UnwetterwarnungenKarteST->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteST->Location = System::Drawing::Point(119, 393);
			this->button_UnwetterwarnungenKarteST->Name = L"button_UnwetterwarnungenKarteST";
			this->button_UnwetterwarnungenKarteST->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteST->TabIndex = 13;
			this->button_UnwetterwarnungenKarteST->Text = L"ST";
			this->button_UnwetterwarnungenKarteST->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteST->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteST->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteSN
			// 
			this->button_UnwetterwarnungenKarteSN->AutoSize = true;
			this->button_UnwetterwarnungenKarteSN->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteSN->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteSN->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteSN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteSN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteSN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteSN->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteSN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteSN.Image")));
			this->button_UnwetterwarnungenKarteSN->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteSN->Location = System::Drawing::Point(21, 393);
			this->button_UnwetterwarnungenKarteSN->Name = L"button_UnwetterwarnungenKarteSN";
			this->button_UnwetterwarnungenKarteSN->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteSN->TabIndex = 12;
			this->button_UnwetterwarnungenKarteSN->Text = L"SN";
			this->button_UnwetterwarnungenKarteSN->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteSN->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteSN->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteSL
			// 
			this->button_UnwetterwarnungenKarteSL->AutoSize = true;
			this->button_UnwetterwarnungenKarteSL->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteSL->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteSL->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteSL->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteSL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteSL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteSL->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteSL.Image")));
			this->button_UnwetterwarnungenKarteSL->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteSL->Location = System::Drawing::Point(315, 310);
			this->button_UnwetterwarnungenKarteSL->Name = L"button_UnwetterwarnungenKarteSL";
			this->button_UnwetterwarnungenKarteSL->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteSL->TabIndex = 11;
			this->button_UnwetterwarnungenKarteSL->Text = L"SL";
			this->button_UnwetterwarnungenKarteSL->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteSL->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteSL->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteRP
			// 
			this->button_UnwetterwarnungenKarteRP->AutoSize = true;
			this->button_UnwetterwarnungenKarteRP->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteRP->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteRP->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteRP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteRP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteRP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteRP->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteRP->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteRP.Image")));
			this->button_UnwetterwarnungenKarteRP->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteRP->Location = System::Drawing::Point(217, 310);
			this->button_UnwetterwarnungenKarteRP->Name = L"button_UnwetterwarnungenKarteRP";
			this->button_UnwetterwarnungenKarteRP->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteRP->TabIndex = 10;
			this->button_UnwetterwarnungenKarteRP->Text = L"RP";
			this->button_UnwetterwarnungenKarteRP->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteRP->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteRP->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteNW
			// 
			this->button_UnwetterwarnungenKarteNW->AutoSize = true;
			this->button_UnwetterwarnungenKarteNW->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteNW->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteNW->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteNW->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteNW->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteNW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteNW->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteNW->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteNW.Image")));
			this->button_UnwetterwarnungenKarteNW->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteNW->Location = System::Drawing::Point(119, 310);
			this->button_UnwetterwarnungenKarteNW->Name = L"button_UnwetterwarnungenKarteNW";
			this->button_UnwetterwarnungenKarteNW->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteNW->TabIndex = 9;
			this->button_UnwetterwarnungenKarteNW->Text = L"NW";
			this->button_UnwetterwarnungenKarteNW->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteNW->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteNW->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteNI
			// 
			this->button_UnwetterwarnungenKarteNI->AutoSize = true;
			this->button_UnwetterwarnungenKarteNI->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteNI->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteNI->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteNI->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteNI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteNI->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteNI->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteNI.Image")));
			this->button_UnwetterwarnungenKarteNI->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteNI->Location = System::Drawing::Point(21, 310);
			this->button_UnwetterwarnungenKarteNI->Name = L"button_UnwetterwarnungenKarteNI";
			this->button_UnwetterwarnungenKarteNI->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteNI->TabIndex = 8;
			this->button_UnwetterwarnungenKarteNI->Text = L"NI";
			this->button_UnwetterwarnungenKarteNI->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteNI->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteNI->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteMV
			// 
			this->button_UnwetterwarnungenKarteMV->AutoSize = true;
			this->button_UnwetterwarnungenKarteMV->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteMV->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteMV->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteMV->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteMV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteMV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteMV->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteMV->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteMV.Image")));
			this->button_UnwetterwarnungenKarteMV->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteMV->Location = System::Drawing::Point(315, 227);
			this->button_UnwetterwarnungenKarteMV->Name = L"button_UnwetterwarnungenKarteMV";
			this->button_UnwetterwarnungenKarteMV->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteMV->TabIndex = 7;
			this->button_UnwetterwarnungenKarteMV->Text = L"MV";
			this->button_UnwetterwarnungenKarteMV->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteMV->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteMV->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteHE
			// 
			this->button_UnwetterwarnungenKarteHE->AutoSize = true;
			this->button_UnwetterwarnungenKarteHE->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteHE->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteHE->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteHE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteHE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteHE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteHE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteHE->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteHE.Image")));
			this->button_UnwetterwarnungenKarteHE->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteHE->Location = System::Drawing::Point(217, 227);
			this->button_UnwetterwarnungenKarteHE->Name = L"button_UnwetterwarnungenKarteHE";
			this->button_UnwetterwarnungenKarteHE->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteHE->TabIndex = 6;
			this->button_UnwetterwarnungenKarteHE->Text = L"HE";
			this->button_UnwetterwarnungenKarteHE->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteHE->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteHE->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteHH
			// 
			this->button_UnwetterwarnungenKarteHH->AutoSize = true;
			this->button_UnwetterwarnungenKarteHH->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteHH->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteHH->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteHH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteHH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteHH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteHH->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteHH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteHH.Image")));
			this->button_UnwetterwarnungenKarteHH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteHH->Location = System::Drawing::Point(119, 227);
			this->button_UnwetterwarnungenKarteHH->Name = L"button_UnwetterwarnungenKarteHH";
			this->button_UnwetterwarnungenKarteHH->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteHH->TabIndex = 5;
			this->button_UnwetterwarnungenKarteHH->Text = L"HH";
			this->button_UnwetterwarnungenKarteHH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteHH->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteHH->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteHB
			// 
			this->button_UnwetterwarnungenKarteHB->AutoSize = true;
			this->button_UnwetterwarnungenKarteHB->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteHB->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteHB->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteHB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteHB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteHB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteHB->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteHB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteHB.Image")));
			this->button_UnwetterwarnungenKarteHB->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteHB->Location = System::Drawing::Point(21, 227);
			this->button_UnwetterwarnungenKarteHB->Name = L"button_UnwetterwarnungenKarteHB";
			this->button_UnwetterwarnungenKarteHB->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteHB->TabIndex = 4;
			this->button_UnwetterwarnungenKarteHB->Text = L"HB";
			this->button_UnwetterwarnungenKarteHB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteHB->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteHB->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteBB
			// 
			this->button_UnwetterwarnungenKarteBB->AutoSize = true;
			this->button_UnwetterwarnungenKarteBB->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteBB->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteBB->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteBB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteBB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteBB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteBB->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteBB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteBB.Image")));
			this->button_UnwetterwarnungenKarteBB->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteBB->Location = System::Drawing::Point(315, 144);
			this->button_UnwetterwarnungenKarteBB->Name = L"button_UnwetterwarnungenKarteBB";
			this->button_UnwetterwarnungenKarteBB->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteBB->TabIndex = 3;
			this->button_UnwetterwarnungenKarteBB->Text = L"BB";
			this->button_UnwetterwarnungenKarteBB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteBB->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteBB->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteBE
			// 
			this->button_UnwetterwarnungenKarteBE->AutoSize = true;
			this->button_UnwetterwarnungenKarteBE->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteBE->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteBE->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteBE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteBE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteBE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteBE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteBE->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteBE.Image")));
			this->button_UnwetterwarnungenKarteBE->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteBE->Location = System::Drawing::Point(217, 144);
			this->button_UnwetterwarnungenKarteBE->Name = L"button_UnwetterwarnungenKarteBE";
			this->button_UnwetterwarnungenKarteBE->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteBE->TabIndex = 2;
			this->button_UnwetterwarnungenKarteBE->Text = L"BE";
			this->button_UnwetterwarnungenKarteBE->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteBE->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteBE->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteBY
			// 
			this->button_UnwetterwarnungenKarteBY->AutoSize = true;
			this->button_UnwetterwarnungenKarteBY->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteBY->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteBY->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteBY->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteBY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteBY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteBY->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteBY->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteBY.Image")));
			this->button_UnwetterwarnungenKarteBY->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteBY->Location = System::Drawing::Point(119, 144);
			this->button_UnwetterwarnungenKarteBY->Name = L"button_UnwetterwarnungenKarteBY";
			this->button_UnwetterwarnungenKarteBY->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteBY->TabIndex = 1;
			this->button_UnwetterwarnungenKarteBY->Text = L"BY";
			this->button_UnwetterwarnungenKarteBY->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteBY->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteBY->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// button_UnwetterwarnungenKarteBW
			// 
			this->button_UnwetterwarnungenKarteBW->AutoSize = true;
			this->button_UnwetterwarnungenKarteBW->BackColor = System::Drawing::Color::BlueViolet;
			this->button_UnwetterwarnungenKarteBW->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_UnwetterwarnungenKarteBW->FlatAppearance->BorderSize = 2;
			this->button_UnwetterwarnungenKarteBW->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_UnwetterwarnungenKarteBW->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_UnwetterwarnungenKarteBW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_UnwetterwarnungenKarteBW->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_UnwetterwarnungenKarteBW->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_UnwetterwarnungenKarteBW.Image")));
			this->button_UnwetterwarnungenKarteBW->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_UnwetterwarnungenKarteBW->Location = System::Drawing::Point(21, 144);
			this->button_UnwetterwarnungenKarteBW->Name = L"button_UnwetterwarnungenKarteBW";
			this->button_UnwetterwarnungenKarteBW->Size = System::Drawing::Size(88, 77);
			this->button_UnwetterwarnungenKarteBW->TabIndex = 0;
			this->button_UnwetterwarnungenKarteBW->Text = L"BW";
			this->button_UnwetterwarnungenKarteBW->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button_UnwetterwarnungenKarteBW->UseVisualStyleBackColor = false;
			this->button_UnwetterwarnungenKarteBW->Click += gcnew System::EventHandler(this, &Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Controls->Add(this->textBox_StadtAuswahl);
			this->panel1->Controls->Add(this->label_StadtAuswaehlen);
			this->panel1->Controls->Add(this->button_InfosZuStadtAnzeigen);
			this->panel1->Controls->Add(this->button_unwetterWarnungenAktualisieren);
			this->panel1->Location = System::Drawing::Point(688, 246);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 91);
			this->panel1->TabIndex = 15;
			// 
			// button_InfosKonstanz
			// 
			this->button_InfosKonstanz->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_InfosKonstanz->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_InfosKonstanz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_InfosKonstanz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_InfosKonstanz.Image")));
			this->button_InfosKonstanz->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_InfosKonstanz->Location = System::Drawing::Point(954, 207);
			this->button_InfosKonstanz->Name = L"button_InfosKonstanz";
			this->button_InfosKonstanz->Size = System::Drawing::Size(158, 33);
			this->button_InfosKonstanz->TabIndex = 16;
			this->button_InfosKonstanz->Text = L"Konstanz";
			this->button_InfosKonstanz->UseVisualStyleBackColor = false;
			this->button_InfosKonstanz->Click += gcnew System::EventHandler(this, &Hauptfenster::button_InfosStadt_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(27, 40);
			this->panel2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 7);
			this->label2->TabIndex = 18;
			this->label2->Text = L"A.Popp, 2020";
			// 
			// panel3
			// 
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Location = System::Drawing::Point(998, 816);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(114, 32);
			this->panel3->TabIndex = 18;
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1363, 1010);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button_InfosKonstanz);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_KarteLeeren);
			this->Controls->Add(this->panel_UnwetterwarnungenKarten);
			this->Controls->Add(this->button_InfosTuebingen);
			this->Controls->Add(this->button_InfosFreiburg);
			this->Controls->Add(this->button_InfosStuttgart);
			this->Controls->Add(this->button_InfosKarlsruhe);
			this->Controls->Add(this->button_InfosHeidelberg);
			this->Controls->Add(this->textBox_StadtKoordinaten);
			this->Controls->Add(this->panel_KarteBW);
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hauptfenster";
			this->Load += gcnew System::EventHandler(this, &Hauptfenster::Hauptfenster_Load);
			this->panel_KarteBW->ResumeLayout(false);
			this->panel_KarteBW->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_warnstufen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_wappenBundesland))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_WetterOK))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Glaette))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Regen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Gewitter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Frost))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Schnee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Sturmboeen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Windboeen))->EndInit();
			this->panel_UnwetterwarnungenKarten->ResumeLayout(false);
			this->panel_UnwetterwarnungenKarten->PerformLayout();
			this->panel_radioButtons->ResumeLayout(false);
			this->panel_radioButtons->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_KarteLeeren_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_unwetterWarnungenAktualisieren_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Hauptfenster_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_InfosStadt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void methode_UnwetterwarnungenKarteBundesrepublik(System::Object^ sender, System::EventArgs^ e);
	private: System::Void methode_radioButtons_Unwetter(System::Object^ sender, System::EventArgs^ e);
	};
}

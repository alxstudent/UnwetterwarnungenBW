#include "Hauptfenster.h"
#include <string>
#include "Warnungen.h"
#include <list>
#include <typeinfo>

using namespace System;
using namespace System::Net;
using namespace System::IO;
using namespace Newtonsoft::Json;
using namespace System::Collections::Generic;

//
//
//

System::Void Abschlussprojekt::Hauptfenster::button_KarteLeeren_Click(System::Object^ sender, System::EventArgs^ e)
{
	panel_KarteBW->BackgroundImage = Image::FromFile(System::String::Concat(System::IO::Directory::GetCurrentDirectory(), "\\daten\\KarteBW.png"));

	pictureBox_wappenBundesland->Visible = false;
	label_beschriftungWappen->Visible = false;

	pictureBox_warnstufen->Visible = false;

	pictureBox_Windboeen->Visible = false;
	pictureBox_Windboeen->Location = Point(0, 0);

	pictureBox_Sturmboeen->Visible = false;
	pictureBox_Sturmboeen->Location = Point(0, 0);

	pictureBox_Glaette->Visible = false;
	pictureBox_Glaette->Location = Point(0, 0);

	pictureBox_Regen->Visible = false;
	pictureBox_Regen->Location = Point(0, 0);

	pictureBox_Schnee->Visible = false;
	pictureBox_Schnee->Location = Point(0, 0);

	pictureBox_Frost->Visible = false;
	pictureBox_Frost->Location = Point(0, 0);

	pictureBox_Gewitter->Visible = false;
	pictureBox_Gewitter->Location = Point(0, 0);

	pictureBox_WetterOK->Visible = false;
	pictureBox_WetterOK->Location = Point(0, 0);
}
//
//
//
System::Void Abschlussprojekt::Hauptfenster::button_unwetterWarnungenAktualisieren_Click(System::Object^ sender, System::EventArgs^ e)
{
		// Soll nur aktualisieren.

	ServicePointManager::SecurityProtocol = ServicePointManager::SecurityProtocol | SecurityProtocolType::Tls11 | SecurityProtocolType::Tls12;


	String^ url = "https://www.dwd.de/DWD/warnungen/warnapp/json/warnings.json";


	HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(url));

	HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();

	StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());

	String^ contentJSON = reader->ReadToEnd();

	response->Close();

	reader->Close();

	textBox_StadtKoordinaten->Text = contentJSON;

	long laenge = contentJSON->Length;
	array<Char>^ gesucht1 = { '(' };
	array<Char>^ gesucht2 = { ')' };
	long foundFirst = contentJSON->IndexOfAny(gesucht1, 0);
	long foundLast = contentJSON->LastIndexOfAny(gesucht2, laenge - 1);

	contentJSON = contentJSON->Remove(foundLast);
	contentJSON = contentJSON->Remove(0, foundFirst + 1);
	contentJSON = contentJSON->Trim();

	Wrapper^ wettermeldungenWrpr = JsonConvert::DeserializeObject <Wrapper^>(contentJSON);

	Dictionary< long, List<Warnungen^>^>^ wetterWarnungen = wettermeldungenWrpr->warnings;

	for each (KeyValuePair<long, List<Warnungen^>^> entry in wetterWarnungen)
	{
		List<Warnungen^>^ warnungen = entry.Value;

		if (warnungen[0]->state == bundeslandBW) {
			warnungenBW->AddRange(warnungen);
		}
	}

	// aktualisierte Wetterdaten anzeigen

	if (warnungenBW->Count == 0)
	{
		textBox_StadtKoordinaten->Text = "Momentan liegen keine Warnungen für " + bundeslandBW + " vor!";
	}
	else {
		for (size_t i = 0; i < warnungenBW->Count; i++) {
			if (i == 0)
			{
				textBox_StadtKoordinaten->Text = "Warnungen für " + Environment::NewLine + "=============================" + Environment::NewLine;
			}
			if (i > 0 && (warnungenBW[i - 1]->regionName != warnungenBW[i]->regionName)) // zusammengefasst, falls mehrere meldungen zu einer stadt
			{
				textBox_StadtKoordinaten->AppendText(Environment::NewLine + "=============================" + Environment::NewLine + warnungenBW[i]->regionName + Environment::NewLine + "----------------------------------------------" + Environment::NewLine);
			}
			textBox_StadtKoordinaten->AppendText(warnungenBW[i]->event + Environment::NewLine);
		}
	}
}
//
//
//
System::Void Abschlussprojekt::Hauptfenster::Hauptfenster_Load(System::Object^ sender, System::EventArgs^ e)
{

	//////////////////////////////////////////////////////////////////////////////////////////////
	ServicePointManager::SecurityProtocol = ServicePointManager::SecurityProtocol | SecurityProtocolType::Tls11 | SecurityProtocolType::Tls12;

	String^ url = "https://www.dwd.de/DWD/warnungen/warnapp/json/warnings.json";

	// objekt anlegen, anfrage
	HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(url));

	//antwort, alle mögl Infos
	HttpWebResponse^ response = (HttpWebResponse^)request->GetResponse();

	//inhalt vom GetResponse
	StreamReader^ reader = gcnew StreamReader(response->GetResponseStream());

	String^ contentJSON = reader->ReadToEnd();

	response->Close();

	reader->Close();
	// zur Kontrolle anzeigen
	// textBox_StadtKoordinaten->Text = contentJSON;
	textBox_StadtKoordinaten->Text = "+ + + WETTERWARNUNGEN GELADEN + + +";

	// JSONP in JSON formatieren
	//nach erster ( - und letzter ) Klammer suchen
	long laenge = contentJSON->Length;
	array<Char>^ gesucht1 = { '(' };
	array<Char>^ gesucht2 = { ')' };
	long foundFirst = contentJSON->IndexOfAny(gesucht1, 0); // 0: von beginn an bis 100 zeichen suchen
	long foundLast = contentJSON->LastIndexOfAny(gesucht2, laenge - 1);

	//Alles vor erster ( und nach letzter) abschneiden und alle Leerzeichen im Satz vorne und hinten löschen
	contentJSON = contentJSON->Remove(foundLast);
	contentJSON = contentJSON->Remove(0, foundFirst + 1);
	contentJSON = contentJSON->Trim();

	//Daten einlesen in einen wrapper aus den JSON daten
	Wrapper^ wettermeldungenWrpr = JsonConvert::DeserializeObject <Wrapper^>(contentJSON);

	//alle Warnungen raussuchen. time, vorabinformation, copyright ignoriert
	Dictionary< long, List<Warnungen^>^>^ wetterWarnungen = wettermeldungenWrpr->warnings;

	/////////////////////////////////////////////////////////////////////////////////////////////////

	//neue liste für bw-einträgen erstellen: List<Warnungen^>^ warnungenBW = gcnew List<Warnungen^>;
	// Damit warnungenBW überall bekannt sind, müssen diese in Hauptfenster.h bekannt gemacht werden und im konstruktor angekündigt werden: Attribut+Konstruktor

	//bundeslandBW ist auch als attribut für hauptfester gemacht: String^ bundeslandBW = "Baden-Württemberg";

	// alle warnungen im dictionary betrachten
	for each (KeyValuePair<long, List<Warnungen^>^> entry in wetterWarnungen)
	{
		// zu jeder Stadt/Gemeinde/Kreis alle warnungen in eine liste schreiben
		// es können mehrere warnungen sein zb: windböen, glätte, schneefall etc...
		List<Warnungen^>^ warnungen = entry.Value;

		if (warnungen[0]->state == bundeslandBW) {// nur BW anzeigen
			//die neue liste mit bw-einträgen befüllen
			warnungenBW->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandBY) {
			warnungenBY->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandBE) {
			warnungenBE->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandBB) {
			warnungenBB->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandHB) {
			warnungenHB->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandHH) {
			warnungenHH->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandHE) {
			warnungenHE->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandMV) {
			warnungenMV->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandNI) {
			warnungenNI->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandNW) {
			warnungenNW->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandRP) {
			warnungenRP->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandSL) {
			warnungenSL->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandSN) {
			warnungenSN->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandST) {
			warnungenST->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandSH) {
			warnungenSH->AddRange(warnungen);
		}
		else if (warnungen[0]->state == bundeslandTH) {
			warnungenTH->AddRange(warnungen);
		}
	}

	if (warnungenBW->Count == 0)
	{
		textBox_StadtKoordinaten->Text = "Momentan liegen keine Warnungen für " + bundeslandBW + " vor!";
	}
}
//
//
//
// Soll analog auf die anderen Städte angewendet werden. Realisiert durch Blitz-Symbol im Entwurf
System::Void Abschlussprojekt::Hauptfenster::button_InfosStadt_Click(System::Object^ sender, System::EventArgs^ e)
{
	// erstmal alles leeren:
	panel_KarteBW->BackgroundImage = Image::FromFile(System::String::Concat(System::IO::Directory::GetCurrentDirectory(), "\\daten\\KarteBW.png"));

	pictureBox_wappenBundesland->Visible = false;
	label_beschriftungWappen->Visible = false;

	pictureBox_warnstufen->Visible = false;

	pictureBox_Windboeen->Visible = false;
	pictureBox_Windboeen->Location = Point(0, 0);

	pictureBox_Sturmboeen->Visible = false;
	pictureBox_Sturmboeen->Location = Point(0, 0);

	pictureBox_Glaette->Visible = false;
	pictureBox_Glaette->Location = Point(0, 0);

	pictureBox_Regen->Visible = false;
	pictureBox_Regen->Location = Point(0, 0);

	pictureBox_Schnee->Visible = false;
	pictureBox_Schnee->Location = Point(0, 0);

	pictureBox_Frost->Visible = false;
	pictureBox_Frost->Location = Point(0, 0);

	pictureBox_Gewitter->Visible = false;
	pictureBox_Gewitter->Location = Point(0, 0);

	pictureBox_WetterOK->Visible = false;
	pictureBox_WetterOK->Location = Point(0, 0);
	//////////////////////////////////////////////

	// sender typ umwandeln. Nur falls sender == button ist (z.b. nur versehentlich auf panel geklickt), dann soll was passieren: if ohne else

	if (sender->GetType()->Name == "Button")
	{
		Button^ buttonGedrueckt = (Button^)sender;
		String^ buttonBeschriftung = buttonGedrueckt->Text;
		String^ stadtEingabe = "";
		String^ stadt = "";
		String^ ort = "";

		// abfrage, was gedrückt wurde: einer der festgelegten städte oder der button "Unwetterwarnungen anzeigen"
		// wenn button "Unwetterwarnungen anzeigen" gedrückt wurde:  wenn leer, soll nix passieren, sonst mit der eingabe weiterarbeiten...
		if (buttonBeschriftung == "LOS")
		{
			if (textBox_StadtAuswahl->Text != "")
			{
				stadtEingabe = textBox_StadtAuswahl->Text;
			}
			else
			{
				textBox_StadtKoordinaten->Text = "Keine Stadt ausgewählt";
			}
		}
		else {
			stadtEingabe = buttonBeschriftung; //für die festgelegten Buttons
		}

		// alles groß schreiben
		stadtEingabe = stadtEingabe->ToUpper();
		//////////////////////////// auf Karte anzeigen ////////////////////
		if (stadtEingabe != "") // wenn stadt nicht leer ist:
		{
			String^ fileName = Environment::CurrentDirectory + "\\daten\\BWKoordinaten.txt";
			array<String^>^ koordinatenBW = System::IO::File::ReadAllLines(fileName, System::Text::Encoding::Default);

			//// breitengrad und längengrad auslesen
			array<Char>^ sep = gcnew array<Char>{','}; // daten liegen in form vor: stadt,breitengrad,längengrad
			array<String^>^ result;
			double breitengrad = 0.0;
			double laengengrad = 0.0;

			// daten liegen in form vor: stadt,breitengrad,längengrad
			for (int i = 0; i < koordinatenBW->Length; i++)
			{
				if (koordinatenBW[i]->ToUpper()->Contains(stadtEingabe))
				{
					result = koordinatenBW[i]->Split(sep);
					ort = result[0]->ToUpper(); // wg groß- klein schreibung

					if (ort->Contains(stadtEingabe))
					{
						//stadt = stadtEingabe;
						stadt = ort;
						breitengrad = Convert::ToDouble(result[1], System::Globalization::CultureInfo::InvariantCulture);
						laengengrad = Convert::ToDouble(result[2], System::Globalization::CultureInfo::InvariantCulture);
						break;
					}
				}
			}

			array<double>^ stadtKoordinaten = { breitengrad,laengengrad };

			// wenn keine stadt in der liste vorhanden ist, dann soll nichts passieren
			if (stadt == "")
			{
				textBox_StadtKoordinaten->Text = "***Kein Eintrag zu der Stadt / dem Ort***";
				textBox_StadtAuswahl->Clear();
			}
			else
			{
				///////////////////////////////////////////////

				// dimensionen des hintergrundbildes holen

				int dXKarte = panel_KarteBW->BackgroundImage->Width;
				int dYKarte = panel_KarteBW->BackgroundImage->Height;

				//auf koordinaten umrechnen, da die gps koordinaten für eckpunkte bekannt sind
				// Umrechnunng: delta breitengrad=49,91-47,48, delta längengrad=10,5400-7,4. Ausschnitt aus OpenStreetMap
				// eingabe in GPS->umrechnung position pixel
				double umrechnungsfaktorLaengengrad = (dXKarte) / (10.5400 - 7.4);//offset
				double umrechnungsfaktorBreitengrad = (dYKarte) / (49.91 - 47.48);//+ 25

				double positionBreitengrad = (49.91 - breitengrad) * umrechnungsfaktorBreitengrad;
				double positionLaengengrad = (laengengrad - 7.4) * umrechnungsfaktorLaengengrad;

				//////////////////////////// Meldungen anzeigen //////////////////////
				int anzahlEintraege = 0;
				textBox_StadtKoordinaten->Clear();
				for (size_t i = 0; i < warnungenBW->Count; i++) 
				{
					if (warnungenBW[i]->regionName->ToUpper()->Contains(stadt))
					{
						anzahlEintraege++;

						if (anzahlEintraege == 1) {
							textBox_StadtKoordinaten->Text = "Warnungen für " + result[0] + Environment::NewLine;
							textBox_StadtKoordinaten->AppendText("GPS-Koordinaten: ");

							for (size_t i = 0; i < stadtKoordinaten->Length; i++)
							{
								textBox_StadtKoordinaten->Text += stadtKoordinaten[i];
								if (i == 0)
								{
									textBox_StadtKoordinaten->Text += " / ";
								}
								else { textBox_StadtKoordinaten->AppendText(Environment::NewLine + "=============================" + Environment::NewLine + Environment::NewLine); }
							}
						}
						textBox_StadtKoordinaten->AppendText(warnungenBW[i]->regionName + Environment::NewLine);
						textBox_StadtKoordinaten->AppendText(warnungenBW[i]->event + Environment::NewLine + Environment::NewLine);

						if (warnungenBW[i]->event->Contains("WINDBÖEN")) // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Windboeen->Visible = true;
							pictureBox_Windboeen->Location = System::Drawing::Point((positionLaengengrad), (positionBreitengrad));
						}
						else if (warnungenBW[i]->event->Contains("STURMBÖEN")) // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Sturmboeen->Visible = true;
							pictureBox_Sturmboeen->Location = System::Drawing::Point((positionLaengengrad - 10), (positionBreitengrad - 60));
						}
						else if (warnungenBW[i]->event->Contains("REGEN") || warnungenBW[i]->event == "GEWITTER") // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Regen->Visible = true;
							pictureBox_Regen->Location = System::Drawing::Point((positionLaengengrad - 40), (positionBreitengrad - 30));
						}
						else if (warnungenBW[i]->event == "STARKES GEWITTER") // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Gewitter->Visible = true;
							pictureBox_Gewitter->Location = System::Drawing::Point((positionLaengengrad - 10), (positionBreitengrad - 30));
						}
						else if (warnungenBW[i]->event->Contains("GLÄTTE")) // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Glaette->Visible = true;
							pictureBox_Glaette->Location = System::Drawing::Point((positionLaengengrad - 40), (positionBreitengrad));
						}
						else if (warnungenBW[i]->event->Contains("SCHNEE")) // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Schnee->Visible = true;
							pictureBox_Schnee->Location = System::Drawing::Point((positionLaengengrad - 10), (positionBreitengrad + 0));
						}
						else if (warnungenBW[i]->event->Contains("FROST")) // Sturmböen, glätte, frost, starkes gewitter, schnee  etc...
						{
							pictureBox_Frost->Visible = true;
							pictureBox_Frost->Location = System::Drawing::Point((positionLaengengrad + 20), (positionBreitengrad - 0));
						}
					}
				}
				if (anzahlEintraege == 0) {
					textBox_StadtKoordinaten->Text = "Momentan liegen keine Warnungen für " + result[0] + " vor!";
					pictureBox_WetterOK->Visible = true;
					pictureBox_WetterOK->Location = System::Drawing::Point((positionLaengengrad - 15), (positionBreitengrad - 15));
				}

				// Stadt markieren/ Quadrat malen

				Graphics^ leinwand = panel_KarteBW->CreateGraphics();
				Pen^ gruenerStift = gcnew Pen(Color::Green);
				gruenerStift->Width = 1;
				SolidBrush^ roterPinsel = gcnew SolidBrush(Color::FromArgb(150, 0, 191, 255)); 
				leinwand->FillEllipse(roterPinsel, positionLaengengrad - 50, positionBreitengrad - 50, 100, 100);
				////////////////////////////////////////////////////////////////////
			}
			textBox_StadtAuswahl->Clear();
		}
	}
}
//
//
//
System::Void Abschlussprojekt::Hauptfenster::methode_UnwetterwarnungenKarteBundesrepublik(System::Object^ sender, System::EventArgs^ e)
{
	textBox_StadtKoordinaten->Clear();

	pictureBox_wappenBundesland->Visible = false;

	label_beschriftungWappen->Visible = false;

	pictureBox_Windboeen->Visible = false;
	pictureBox_Windboeen->Location = Point(0, 0);

	pictureBox_Sturmboeen->Visible = false;
	pictureBox_Sturmboeen->Location = Point(0, 0);

	pictureBox_Glaette->Visible = false;
	pictureBox_Glaette->Location = Point(0, 0);

	pictureBox_Regen->Visible = false;
	pictureBox_Regen->Location = Point(0, 0);

	pictureBox_Schnee->Visible = false;
	pictureBox_Schnee->Location = Point(0, 0);

	pictureBox_Frost->Visible = false;
	pictureBox_Frost->Location = Point(0, 0);

	pictureBox_Gewitter->Visible = false;
	pictureBox_Gewitter->Location = Point(0, 0);

	pictureBox_WetterOK->Visible = false;
	pictureBox_WetterOK->Location = Point(0, 0);

	////////////////////////////////////////////////

	// identifizierung über die beschriftung der buttons
	Button^ buttonGedrueckt = (Button^)sender;
	String^ buttonBeschriftung = buttonGedrueckt->Text;
	String^ url = "https://www.dwd.de/DWD/warnungen/warnapp_gemeinden/json/warnungen_gemeinde_map";
	List<Warnungen^>^ warnungenBundesland = gcnew List<Warnungen^>;
	String^ bundeslandAusgewaehlt;

	if (buttonBeschriftung == "BW")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteBW->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteBW->Top;
		url += "_baw";
		warnungenBundesland = warnungenBW;
		bundeslandAusgewaehlt = bundeslandBW;
	}
	else if (buttonBeschriftung == "BY")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteBY->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteBY->Top;
		url += "_bay";
		warnungenBundesland = warnungenBY;
		bundeslandAusgewaehlt = bundeslandBY;
	}
	else if (buttonBeschriftung == "BE" || buttonBeschriftung == "BB") // zwei bundesländer zusammengefasst
	{
		url += "_bbb";
		if (buttonBeschriftung == "BE")
		{
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteBE->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteBE->Top;
			warnungenBundesland = warnungenBE;
			bundeslandAusgewaehlt = bundeslandBE;
		}
		else {
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteBB->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteBB->Top;
			warnungenBundesland = warnungenBB;
			bundeslandAusgewaehlt = bundeslandBB;
		}
	}
	else if (buttonBeschriftung == "HB" || buttonBeschriftung == "NI")// zwei bundesländer zusammengefasst
	{
		url += "_nib";
		if (buttonBeschriftung == "HB")
		{
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteHB->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteHB->Top;

			warnungenBundesland = warnungenHB;
			bundeslandAusgewaehlt = bundeslandHB;
		}
		else {
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteNI->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteNI->Top;
			warnungenBundesland = warnungenNI;
			bundeslandAusgewaehlt = bundeslandNI;
		}
	}

	else if (buttonBeschriftung == "HH" || buttonBeschriftung == "SH")// zwei bundesländer zusammengefasst
	{
		url += "_shh";

		if (buttonBeschriftung == "HH")
		{
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteHH->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteHH->Top;
			warnungenBundesland = warnungenHH;
			bundeslandAusgewaehlt = bundeslandHH;
		}
		else {
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteSH->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteSH->Top;
			warnungenBundesland = warnungenSH;
			bundeslandAusgewaehlt = bundeslandSH;
		}
	}
	else if (buttonBeschriftung == "HE")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteHE->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteHE->Top;
		url += "_hes";
		warnungenBundesland = warnungenHE;
		bundeslandAusgewaehlt = bundeslandHE;
	}
	else if (buttonBeschriftung == "MV")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteMV->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteMV->Top;
		url += "_mvp";
		warnungenBundesland = warnungenMV;
		bundeslandAusgewaehlt = bundeslandMV;
	}
	else if (buttonBeschriftung == "NW")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteNW->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteNW->Top;
		url += "_nrw";
		warnungenBundesland = warnungenNW;
		bundeslandAusgewaehlt = bundeslandNW;
	}
	else if (buttonBeschriftung == "RP" || buttonBeschriftung == "SL")// zwei bundesländer zusammengefasst
	{
		url += "_rps";

		if (buttonBeschriftung == "RP")
		{
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteRP->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteRP->Top;
			warnungenBundesland = warnungenRP;
			bundeslandAusgewaehlt = bundeslandRP;
		}
		else {
			panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteSL->Left;
			panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteSL->Top;
			warnungenBundesland = warnungenSL;
			bundeslandAusgewaehlt = bundeslandSL;
		}
	}
	else if (buttonBeschriftung == "SN")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteSN->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteSN->Top;
		url += "_sac";
		warnungenBundesland = warnungenSN;
		bundeslandAusgewaehlt = bundeslandSN;
	}
	else if (buttonBeschriftung == "ST")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteST->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteST->Top;
		url += "_saa";
		warnungenBundesland = warnungenST;
		bundeslandAusgewaehlt = bundeslandST;
	}

	else if (buttonBeschriftung == "TH")
	{
		panel_anzeigeLinks->Left = button_UnwetterwarnungenKarteTH->Left;
		panel_anzeigeLinks->Top = button_UnwetterwarnungenKarteTH->Top;
		url += "_thu";
		warnungenBundesland = warnungenTH;
		bundeslandAusgewaehlt = bundeslandTH;
	}

	panel_anzeigeLinks->Height = button_UnwetterwarnungenKarteBW->Height;
	panel_anzeigeLinks->Visible = true;

	// radiobuttons ausgewählt oder nicht

	if (radioButton_Gewitter->Checked == true)
	{
		url += "_gewitter";
	}
	else if (radioButton_Schnee->Checked == true)
	{
		url += "_schnee";
	}
	else if (radioButton_Glaette->Checked == true)
	{
		url += "_glatteis";
	}
	else if (radioButton_Sturm->Checked == true)
	{
		url += "_sturm";
	}
	else if (radioButton_Hitze->Checked == true)
	{
		url += "_hitze";
	}
	else if (radioButton_UV->Checked == true)
	{
		url += "_uv";
	}

	// final-url erstellt
	url += ".png";
	//
	//Bild holen + anzeigen
	//
	HttpWebRequest^ request = dynamic_cast <HttpWebRequest^>(HttpWebRequest::Create(url));
	HttpWebResponse^ reponse = (HttpWebResponse^)request->GetResponse();
	Stream^ stream = reponse->GetResponseStream();
	Image^ bild = Image::FromStream(stream);
	panel_KarteBW->BackgroundImage = bild;
	//
	// wappen anzeigen
	//
	String^ wappenBundesland = String::Concat(System::IO::Directory::GetCurrentDirectory(), "\\iconsBundesland\\", buttonBeschriftung, ".jpg");
	pictureBox_wappenBundesland->Visible = true;
	pictureBox_wappenBundesland->BackgroundImage = Image::FromFile(wappenBundesland);
	label_beschriftungWappen->Visible = true;
	label_beschriftungWappen->Text = bundeslandAusgewaehlt;

	pictureBox_warnstufen->Visible = true;

	//
	//warnungen anzeigen
	//
	if (warnungenBundesland->Count == 0)
	{
		textBox_StadtKoordinaten->Text = "Momentan liegen keine Warnungen für " + bundeslandAusgewaehlt + " vor!";
	}
	else {
		for (size_t i = 0; i < warnungenBundesland->Count; i++) { 
			if (i == 0)
			{
				textBox_StadtKoordinaten->Text = "Warnungen für " + bundeslandAusgewaehlt + Environment::NewLine + "=============================" + Environment::NewLine;
			}
			if (i > 0 && (warnungenBundesland[i - 1]->regionName != warnungenBundesland[i]->regionName)) // zusammengefasst, falls mehrere meldungen zu einer stadt
			{
				textBox_StadtKoordinaten->AppendText(Environment::NewLine + "=============================" + Environment::NewLine + warnungenBundesland[i]->regionName + Environment::NewLine + "----------------------------------------------" + Environment::NewLine);
			}
			textBox_StadtKoordinaten->AppendText(warnungenBundesland[i]->event + Environment::NewLine);
		}
	}
}
//
// Methode Radiobuttons
//
System::Void Abschlussprojekt::Hauptfenster::methode_radioButtons_Unwetter(System::Object^ sender, System::EventArgs^ e)
{
	// identifizierung über die beschriftung der buttons
	RadioButton^ radioButtonGedrueckt = (RadioButton^)sender;
	String^ radioButtonBeschriftung = radioButtonGedrueckt->Text;

	if (radioButtonGedrueckt->Checked == true)
	{
		if (radioButtonBeschriftung->Contains("Hitze") || radioButtonBeschriftung->Contains("UV"))
		{
			radioButtonGedrueckt->BackColor = System::Drawing::Color::LightCoral;
		}
		else
		{
			radioButtonGedrueckt->BackColor = System::Drawing::Color::BlueViolet;
			radioButtonGedrueckt->ForeColor = System::Drawing::Color::White;
		}
	}
	else if (radioButtonGedrueckt->Checked == false)
	{
		radioButtonGedrueckt->ResetBackColor();
		radioButtonGedrueckt->ResetForeColor();
		radioButtonGedrueckt->UseVisualStyleBackColor = true;
	}
}
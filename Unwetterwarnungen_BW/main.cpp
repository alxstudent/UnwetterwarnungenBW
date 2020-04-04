/*
Quellen:
Daten: DWD https://www.dwd.de/DE/wetter/warnungen_aktuell/objekt_einbindung/objekteinbindung_node.html
Icons: https://www.flaticon.com/de/, https://www.bpb.de/gesellschaft/bildung/zukunft-bildung/190908/schulgesetze-der-bundeslaender
*/

#include "Hauptfenster.h"
#include "Warnungen.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace Abschlussprojekt;

[STAThread]
void main(array<String^>^ args) {

	// Anweisungen, um die Anwendung "schöner" aussehen zu lassen
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ein Objekt der Klasse hauptfenster wird erzeugt und die automatische Speicherverwaltung wird aktiviert
	Hauptfenster^ fenster1 = gcnew Hauptfenster;

	//Anwendung soll mit Fenster 1 starten
	Application::Run(fenster1);

}

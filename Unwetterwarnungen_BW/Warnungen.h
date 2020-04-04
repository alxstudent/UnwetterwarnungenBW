#pragma once
using namespace System;
using namespace System::Collections::Generic;

//einzelne warnungen
ref class Warnungen
{
public:
	String^ regionName; //Kreis oder Stadt
	String^ start; // zeit ohne die letzten drei nullen
	String^ end; // dito
	String^ type; // Wetterwarnung, Unwetterwarnung etc.
	String^ state; // Bundesland
	String^ level; // Warnungen vor extremem Unwetter (Stufe 4)/ Unwetterwarnungen(Stufe 3)/Warnungen vor markantem Wetter(Stufe 2)/Wetterwarnungen(Stufe 1)
	String^ stateShort; // NRW, BY usw.
	String^ description; // beschreibung der warnung
	String^ event; // sturmb�en etc.
	String^ headline; // �berschrift
	String^ instruction; // anweisungen
	String^ altitudeStart; //gilt f�r h�he
	String^ altitudeEnd;// dito
};


//warnungen sind verschachtelt im folgenden konstrukt
ref class Wrapper {
public:
	long long time;
	Dictionary<long, List<Warnungen^>^>^ warnings;
	Object^ vorabInformation;
	String^ copyright;
};
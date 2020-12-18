/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Übungsaufgaben zu ein- und zweidimensionalen Arrays
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * Das Begleitheft zum Modul E3_M1 kann hier geladen werden:
 * http://www.thefearlessengineer.com/cpp-kurs-e3
 * ----------------------------------------------------------------------
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  //////////////////////////////////
  // ABSCHNITT 1 : Einlesen der ASII-Art und Extrahieren der Daten

  // Text aus Datei einlesen (Anzahl Zeilen und Spalten, Text)
  string line{}, text_1d{}, filename{};
  cout << "Bitte Dateinamen für ASCII-Art angeben : ";
  cin >> filename;
  fstream input_stream(filename, fstream::in);
  if (!input_stream.is_open())
  {
    cout << "Fehler : Datei konnte nicht geöffnet werden" << endl;
    return 1;
  }

  // Anzahl Bildzeilen, Anzahl Bildspalten und Bildinhalt extrahieren
  int num_rows{0}, num_cols{0}, num_chars{0};
  int cnt_lines{0};
  while (getline(input_stream, line)) // Zeile für Zeile über Datei laufen
  {
    if (cnt_lines == 0) // Annahme, dass Anzahl Bildzeilen in erster Zeile steht
    {
      num_rows = stoi(line); // Zeichenkette in Integer konvertieren
    }
    else if (cnt_lines == 1) // Annahme, dass Anzahl Bildspalten in erster Zeile steht
    {
      num_cols = stoi(line);
    }
    else if (cnt_lines == 2) // Annahme, dass hinter Anzahl Zeilen und Spalten der Bildinhalt steht
    {
      text_1d = line;
    }
    else // Fehler: Datei enthält zu viele Zeilen
    {
      cout << "Fehler im Dateiformat: Zu viele Zeilen (erwartet wurden 3)!" << endl;
      return 1;
    }

    ++cnt_lines;
  }

  // Eingelesene Daten auf Fehler prüfen
  if (num_rows == 0 || num_cols == 0 || text_1d.length() == 0)
  {
    cout << "Fehler in Eingabedaten, bitte Dateiinhalt überprüfen" << endl;
    return 1;
  }

  // ENDE ABSCHNITT 1
  //////////////////////////////////

  //////////////////////////////////
  // ABSCHNITT 2 : Darstellen und verändern des ASCII-Bildes

  //// AUFGABE 1 : Text in 2D-Array "einsortieren"
  
  //// a) Lege ein 2D-Array namens "text_2d" des Typs "char" an mit "num_rows" Zeilen und "num_cols" Spalten.
  //// b) Stelle sicher, dass die Größe des Arrays ausreichend für das Bild ist. Falls nicht, beende das Programm mit einer Fehlermeldung.
  //// c) Schreibe eine while-Schleife, die über alle Zeichen von "text_1d" läuft.
  ////// d) Berechne für jedes Zeichen in "text_1d" die Zeilen- und Spaltenkoordinate im 2D-Arrays "text_2d".
  ////// e) Schreibe an die berechnete Position in "text_2d" das jeweilige Zeichen aus "text_1d".
  //// --> Am Ende der Schleife muss der Inhalt aus "text_1d" vollständig in "text_2d" übertragen sein.
  
  //// ENDE AUFGABE 1


  //// AUFGABE 2 : ASCII-Art verändern und im Terminal ausgeben
  
  //// a) Schreibe eine äußere Schleife über alle Zeilen von "text_2d".
  ////// b) Schreibe eine innere Schleife über alle Spalten von "text_2d".
  ////// c1) Gib das jeweilige Zeichen von "text_2d" im Terminal aus.
  ////// c2) Variante : Stelle das ASCII-Bild horizontal gespiegelt dar, indem du die Indizes anpasst.
  ////// c3) Variante : Stelle das ASCII-Bild vertikal gespiegelt dar, indem du die Indizes anpasst.
  //// d) Gib am Ende der inneren Schleife einen Zeilenumbruch aus.
  //// --> Am Ende der beiden Schleifen muss das ASCII-Bild im Terminal sichtbar sein.
  
  //// ENDE AUFGABE 2

  // ENDE ABSCHNITT 2
  //////////////////////////////////
}
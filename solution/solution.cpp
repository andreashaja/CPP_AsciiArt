/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Übungsaufgaben zu ein- und zweidimensionalen Arrays
 * ACHTUNG : Dies ist die MUSTERLÖSUNG!
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

int main(int argc, char *argv[])
{
    //////////////////////////////////
    // ABSCHNITT 1 : Einlesen der ASII-Art und Extrahieren der Daten
    // Hinweis : Dieser Abschnitt ist zwar kein Teil der Übungsaufgabe, sollte aber trotzdem nachvollzogen werden.

    // Text aus Datei einlesen (Anzahl Zeilen und Spalten, Text)
    string line{}, text_1d{}, filename{};
    cout << "HINWEIS: Im Verzeichnis 'data' sind einige Beispiele zu finden.\n";
    if (argc == 1) // Falls kein Parameter übergeben wurde, Dateiname über Terminal einlesen
    {
        cout << "Bitte Dateinamen für ASCII-Art angeben : ";
        cin >> filename;
    }
    else // Falls Parameter vorhanden, Dateiname übernehmen
    {
        filename = argv[1];
    }
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

  cout << "Datei " << filename << " wurde erfolgreich geladen.\n";
  
    // ENDE ABSCHNITT 1
    //////////////////////////////////

    //////////////////////////////////
    // ABSCHNITT 2 : Darstellen und verändern des ASCII-Bildes

    //// AUFGABE 1 : Text in 2D-Array "einsortieren"
    //// a) Lege ein 2D-Array namens "text_2d" des Typs "char" an, dass 200 Zeilen und 300 Spalten enthält.
    ////    Beachte, dass die beiden Werte über die Konstanten "max_rows" und "max_cols" festgelegt werden sollen
    const unsigned int max_rows{200}, max_cols{300};
    char text_2d[max_rows][max_cols];

    //// b) Stelle sicher, dass die Größe des Arrays ausreichend für das Bild ist. Falls nicht, beende das Programm mit einer Fehlermeldung.
    if (num_rows > max_rows || num_cols > max_cols)
    {
        cout << "Fehler: Anzahl Zeilen und/oder Spalten zu groß!\n";
        return 1;
    }

    //// c) Schreibe eine while-Schleife, die über alle Zeichen von "text_1d" läuft.
    int cnt_chars{0};
    while (cnt_chars < text_1d.length())
    {
        ////// d) Berechne für jedes Zeichen in "text_1d" die Zeilen- und Spaltenkoordinate im 2D-Arrays "text_2d".
        int curr_row = cnt_chars / num_cols;
        int curr_col = cnt_chars % num_cols;
        //cout << "row = " << curr_row << ", col = " << curr_col << ", char = " << text_1d[cnt_chars] << endl;

        ////// e) Schreibe an die berechnete Position in "text_2d" das jeweilige Zeichen aus "text_1d".
        text_2d[curr_row][curr_col] = text_1d[cnt_chars];
        ++cnt_chars;
    }
    //// --> Am Ende der Schleife muss der Inhalt aus "text_1d" vollständig in "text_2d" übertragen sein.
    //// ENDE AUFGABE 1

    //// AUFGABE 2 : ASCII-Art verändern und im Terminal ausgeben
    //// a) Schreibe eine äußere Schleife über alle Zeilen von "text_2d".
    int cnt_rows{0};
    while (cnt_rows < num_rows)
    {
        ////// b) Schreibe eine innere Schleife über alle Spalten von "text_2d".
        int cnt_cols{0};
        while (cnt_cols < num_cols)
        {
            ////// c1) Gib das jeweilige Zeichen von "text_2d" im Terminal aus.
            cout << text_2d[cnt_rows][cnt_cols];

            ////// c2) Variante : Stelle das ASCII-Bild horizontal gespiegelt dar, indem du die Indizes anpasst.
            //cout << text_2d[cnt_rows][num_cols-cnt_cols];

            ////// c3) Variante : Stelle das ASCII-Bild vertikal gespiegelt dar, indem du die Indizes anpasst.
            //cout << text_2d[num_rows-cnt_rows][cnt_cols];

            ++cnt_cols;
        }
        //// d) Gib am Ende der inneren Schleife einen Zeilenumbruch aus.
        cout << endl;
        ++cnt_rows;
    }
    //// --> Am Ende der beiden Schleifen muss das ASCII-Bild im Terminal sichtbar sein.
    //// ENDE AUFGABE 2

    // ENDE ABSCHNITT 2
    //////////////////////////////////
}
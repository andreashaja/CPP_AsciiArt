#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // Text aus Datei einlesen (Anzahl Zeilen und Spalten, Text)
  int num_rows{0}, num_cols{0}, num_chars{0};
  int cnt_lines{0};
  string line, text_1d;

  fstream input_stream("ascii-art-1-1d.txt", fstream::in);
  if (!input_stream.is_open())
  {
    cout << "Fehler : Datei konnte nicht geöffnet werden" << endl;
    return 1;
  }

  while (getline(input_stream, line))
  {
    // aktuelle Zeile
    if (cnt_lines == 0) // Anzahl Zeilen
    {
      num_rows = stoi(line);
    }
    else if (cnt_lines == 1) // Anzahl Spalten
    {
      num_cols = stoi(line);
    }
    else if (cnt_lines == 2) // Zeichen
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
    cout << "Fehler in Eingabedaten, bitte Datei überprüfen" << endl;
    return 1;
  }

  // Text in 2D-Array "einsortieren"
  char text_2d[num_rows][num_cols];
  int cnt_chars{0};
  while (cnt_chars < text_1d.length())
  {
    int curr_row = cnt_chars / num_cols;
    int curr_col = cnt_chars % num_cols;
    //cout << "row = " << curr_row << ", col = " << curr_col << ", char = " << text_1d[cnt_chars] << endl;
    text_2d[curr_row][curr_col] = text_1d[cnt_chars];
    ++cnt_chars;
  }

  // Bild auf der Konsole ausgeben
  int cnt_rows{0};
  while (cnt_rows < num_rows)
  {
    int cnt_cols{0};
    while (cnt_cols < num_cols)
    {
      // Bild normal ausgeben
      //cout << text_2d[cnt_rows][cnt_cols];

      // Bild horizontal gespiegelt darstellen (if-else)
      //cout << text_2d[cnt_rows][num_cols-cnt_cols];

      // Bild vertikal gespiegelt darstellen (if-else)
      //cout << text_2d[num_rows-cnt_rows][cnt_cols];

      ++cnt_cols;
    }
    cout << endl;
    ++cnt_rows;
  }
}
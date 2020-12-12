#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  // Zeilen und Spalten zählen
  int num_rows{0}, num_cols{0};
  string text_1d, line, filename_in, filename_out;
  filename_in = "ascii-art-0-2d.txt";
  filename_out = "ascii-art-0-1d.txt";
  fstream input_stream(filename_in, fstream::in);
  while( getline ( input_stream, line ) )
  {
    ++num_rows;
    num_cols = line.length();
    text_1d += line;
  }
  cout << "num_rows = " << num_rows << ", num_cols = " << num_cols << ", text_1d = " << text_1d << endl;

  // Ergebnis im 1D-Format speichern
  fstream output_stream(filename_out, fstream::out);
  output_stream << num_rows << endl << num_cols << endl << text_1d;

  // Dateie schließen
  input_stream.close();
  output_stream.close();

}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  // Zeilen und Spalten zählen
  int num_rows{0}, num_cols{0};
  string text_1d, line;
  fstream input_stream("ascii-art-0-1d.txt", fstream::in);
  while( getline ( input_stream, line ) )
  {
    ++num_rows;
    num_cols = line.length();
    text_1d += line;
  }
  cout << "num_rows = " << num_rows << ", num_cols = " << num_cols << ", text_1d = " << text_1d << endl;

  // Ergebnis im 1D-Format speichern
}
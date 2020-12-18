#include <iostream>

using namespace std;

int main()
{
    char bunny_1d[] = {'(', '\\', '_', '/', ')', ' ', ' ', '(', ' ', '.', '_', '.', ')', ' ', 'c', '(', '"', ')', '(', '"', ')'};
    //cout << "Anzahl Zeichen = " << sizeof(bunny_1d) / sizeof(char) << endl;

    // Bunny-Array mit Inhalten füllen
    const int num_rows = 3;
    const int num_cols = 7;
    char bunny_2d[num_rows][num_cols] =
        {
            {'(', '\\', '_', '/', ')', ' ', ' '}, // Reihe 0
            {'(', ' ', '.', '_', '.', ')', ' '},  // Reihe 1
            {'c', '(', '"', ')', '(', '"', ')'}   // Reihe 2
        };

    // Augen "zusammenkneifen"
    bunny_2d[1][2] = '>';
    bunny_2d[1][4] = '<';

    // Bunny im Terminal ausgeben
    int cnt_rows{0}, cnt_cols{0};
    while (cnt_rows < num_rows)
    {
        cnt_cols = 0;
        while (cnt_cols < num_cols)
        {
            cout << bunny_2d[cnt_rows][cnt_cols];
            ++cnt_cols;
        }
        cout << endl;

        ++cnt_rows;
    }

    return 0;
}
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    /*
    // Zufällige Noten generieren
    int students[50];
    int cnt_stud{0};
    while(cnt_stud<50)
    {
        students[cnt_stud] = rand() % 4 + 1;    
        ++cnt_stud;
    }
    */

    const int num_stud = 50;
    int students[num_stud];
    int cnt_stud{0};
    while (cnt_stud < num_stud)
    {
        students[cnt_stud] = rand() % 4 + 1;
        ++cnt_stud;
    }

    // Auswahl eines Studierenden über das Terminal
    int index_stud{0};
    cout << "Bitte Nummer auswählen [1-50]: ";
    cin >> index_stud;
    cout << "Note Studierende(r) Nr. " << index_stud << " = " << students[index_stud] << endl;

    return 0;
}
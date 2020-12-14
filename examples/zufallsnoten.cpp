#include <cstdlib>     /* srand, rand */
#include <ctime>
#include <iostream>

using namespace std;

int main ()
{
    // Zufallsgenerator mit Uhrzeit initialisieren
    srand (time(NULL));

    int students[5];
    students[0] = rand() % 4 + 1;
    students[1] = rand() % 4 + 1;
    students[2] = rand() % 4 + 1;
    students[3] = rand() % 4 + 1;
    students[4] = rand() % 4 + 1;

    cout << "students[0] = " << students[0] << endl;
    cout << "students[1] = " << students[1] << endl;
    cout << "students[2] = " << students[2] << endl;
    cout << "students[3] = " << students[3] << endl;
    cout << "students[4] = " << students[4] << endl;

    return 0;
}
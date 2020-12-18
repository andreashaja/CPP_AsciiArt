#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    const int num_stud = 50;
    int students[num_stud];
    int cnt_stud{0};
    while (cnt_stud < num_stud)
    {
        students[cnt_stud] = rand() % 50000;
        ++cnt_stud;
    }

    // Auswahl eines Studierenden über das Terminal
    int index_stud{0};
    cout << "Bitte Nummer auswählen [1-50]: ";
    cin >> index_stud;
    printf("ID Studierende(r) Nr. %d =  %05d \n", index_stud, students[index_stud]);    

    return 0;
}
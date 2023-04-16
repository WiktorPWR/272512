#include <iostream>
#include <vector>
using namespace std;
int dodawanie_student(vector<int>indeksy){
    int indeks;
    cout << "Podaj numer indeksu: ";
    cin >> indeks;
    indeksy.push_back(indeks);
    cout << "Dodano studenta o indeksie: " << indeksy.back() << endl;
    return 0;
}
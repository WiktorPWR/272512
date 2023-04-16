#include <iostream>
#include <string>
#include "indeksy.hpp"
using namespace std;
class Menu{
    public:
    void StudentPracownik(){
        cout << "Kim sie chcesz zajac? "<<endl<<"1.Studentem"<<endl<<"2.Pracownik"<<endl;
    }
    void akcje(int opcja){
        if(opcja == 1){
            cout << "Co chcesz zrobic? "<< endl;
            cout << "0 - Wyjscie"<<endl<<"1 - Dodanie studenta"<<endl<<"2 - Wyswietlenie studenta"<<endl<<"3 - Wyswietlenie ilosci studentow"<<endl;
        }
        if(opcja == 2){
            cout << "Co chcesz zrobic? "<< endl;
            cout << "0 - Wyjscie"<<endl<<"1 - Dodanie pracownika"<<endl<<"2 - Wyswietlenie pracownika"<<endl<<"3 - Wyswietlenie ilosci pracownikow"<<endl;
        }
    }
    void wpisywaniestudent(){
        string imie,nazwisko;
        cout <<"Podaj imie studeta: "<<endl;
        cin >> imie;
        cout <<"Podaj nazwisko studenta: "<<endl;
        cin >> nazwisko;
        int indeks;
        double pesel;
        cout <<"Podaj indeks studenta: "<<endl;
        cin >> indeks;
        cout <<"Podaj pesel studenta: "<<endl;
        cin >>pesel;
        wsadzanie(imie,nazwisko,pesel,indeks);
    }
    void wpisywaniepracownik(){
        string imie,nazwisko,stanowisko;
        cout <<"Podaj imie pracownika: "<<endl;
        cin >> imie;
        cout <<"Podaj nazwisko pracownika: "<<endl;
        cin >> nazwisko;
        cout <<"Podaj stanowisko pracownika: "<<endl;
        cin >> stanowisko;
        double pesel;
        cout <<"Podaj pesel studenta: "<<endl;
        cin >> pesel;
        int numerkartypracownika;
        cout <<"Podaj numer karty pracownika"<<endl;
        cin >> 
    }
}
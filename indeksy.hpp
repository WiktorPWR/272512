#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Osoba {
    public:
        string imie;
        string nazwisko;
        string pesel;
        virtual void set_person(){
            cout<<"Podaj imie";
            cin >> imie;
            cout<<"Podaj nazwisko";
            cin >> nazwisko;
            cout<<"Podaj pesel";
            cin >> pesel;
        }

};
class Student:public Osoba{
    private:
        int indeks;
    public:
        void set_student(){
            set_person();
            cout<<"Podaj indeks";
            cin >> indeks;
        }

};
class Pracownik:public Osoba{
    private:
        string stanowisko;
        int numer_karty_pracownika;
    public:
        void set_pracownik(){
            set_person();
            cout<<"Podaj stanowisko";
            cin >> stanowisko;
            cout <<"Podaj numer karty pracownika";
            cin >> numer_karty_pracownika;
        }
};

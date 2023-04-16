#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Pracownik {
    public:
        string imie;
        string nazwisko;
        string stanowisko;
        long long int pesel;
        int NumerKartyPracownika;
        Pracownik(string im,string n,string s,double p,int nr){
            im = imie;
            n = nazwisko;
            s = stanowisko;
            p = pesel;
            nr = NumerKartyPracownika;
        }
};
vector<Pracownik>k;
void wsadzanie(string imie,string nazwisko,string stanowisko,double pesel,int numerkartypracownika){
    Pracownik Pracownik(imie,nazwisko,stanowisko,pesel,numerkartypracownika);
    k.push_back(Pracownik);
}
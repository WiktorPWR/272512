#include <iostream>
#include <vector>
using namespace std;
int odejmowanie_studenta(vector<int> &indeksy){
    cout << "Podaj indeks studenta ktorego chcesz usunac: ";
    int indeks,pozycja;
    cin >> indeks;
    if(indeksy.size() != 0){
    for(int i=0;i<=indeksy.size();i++){
        if(indeks == indeksy.at(i)){
            pozycja = i;
            vector<int>::iterator numer;
            numer = indeksy.begin()+i;
            indeksy.erase(numer);
            cout << "Usunieto studenta o indeksie: "<<indeks << endl<<"Znajdujacego sie na pozycji: "<< pozycja;
            
        }
    }
    }else{cout<<"Nie ma takiego studenta"<<endl;}
    return 0;

}
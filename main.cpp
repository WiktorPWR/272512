#include <iostream>
#include <vector>
#include <string>
#include "indeksy.hpp"
using namespace std;
vector<Osoba>ludzie;
int main(){
    cout<<"Kim sie chcesz zajac?"<<endl;
    cout<<"0.Wyjscie"<<endl<<"1.Student"<<endl<<"2.Pracownik"<<endl;
    Osoba* ballz = nullptr;
    int osoba;
    cin >> osoba;
    while(true){
            switch(osoba){
            case 0:
                return 0;
            case 1:
                ballz = new Student();
                break;
            case 2:
                ballz = new Pracownik();
                break;
            default:
                continue;
        }
        ballz->set_person();
    }
}
    
    
    

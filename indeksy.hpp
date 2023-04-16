#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Student {
    public:
        string imie;
        string nazwisko;
        int indeks;
        long long int pesel;
        Student(string im,string n,int in,double p){
            im = imie;
            n = nazwisko;
            in = indeks;
            p = pesel;
        }
};
vector<Student>v;
void wsadzanie(string imie,string nazwisko,int indeks,double pesel){
    Student Student(imie,nazwisko,indeks,pesel);
    v.push_back(Student);
}



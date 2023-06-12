#include <iostream>
#include <vector>
#include <string>
// dodawnie klasy exel ktora bedzi3 zawierac wszystkie funkkcje get cell itd oraz wektor 2d  komorka
#define db std::vector<std::vector<Komorka*>>

using std::cout;
using std::cin;

enum direction { x = 1, y = 1, youidiotmoronbaka = 0 };

class Komorka{
    public:
        std::string zawartosc;
        Komorka(){ zawartosc = ""; };
        virtual ~Komorka(){
            cout << "destruktor\n";
        };
};

class Excel {
    private:
        db vector;
    public:
    void expand(int x, int y) {
        for(int i = 0; i <= x; i++) {
            std::vector<Komorka*> v;
            for(int j = 0; j <= y; j++) {
                v.push_back(new Komorka);
            }
            vector.push_back(v);
        }
    }
    std::string show_cell(int x, int y){
        return vector[x][y]->zawartosc;
    }
    void set_cell(int x, int y, std::string to_set) {
        vector[x][y]->zawartosc = to_set;
    }
    void destroy() {
        for(std::vector<Komorka*> v : vector) {
            for(Komorka* k : v) {
                delete k;
            }
        }
    }
    int sum_komorki(direction d, int t, int s, int f){
        int sum = 0;
        if(d == direction::x) {
            for(; s <= f; s++) {
                Komorka* k = vector[t][s];
                if(k->zawartosc.find_first_not_of("0123456789") == std::string::npos){
                    int int_k_zawartosc = stoi(k->zawartosc);
                    sum+= int_k_zawartosc;
                }
            }
        }
        return sum;
    }
    
    Excel(int x, int y) {expand(x, y);}
};



// ten enum ma ustawione liczby zeby mozna bylo go uzywac w if-ach i petlach

/*int sum_komorki(db &vector, direction d, int t, int s, int f){
    int sum = 0;
    if(d == direction::x) {
        for(; s <= f; s++) {
            Komorka* k = vector[t][s];
            if(k->zawartosc.find_first_not_of("0123456789") == std::string::npos){
                int int_k_zawartosc = stoi(k->zawartosc);
                sum += int_k_zawartosc;
            }
        }
    }
    return sum;
}
*/

std::istream& operator >>(std::istream& is, direction &d) {
    char t;
    is >> t;
    if( t == 'x' ) { d = direction::x; }
    if( t == 'y' ) { d = direction::y; }
    else { d = direction::youidiotmoronbaka; }
    return is;
}

int main(){
    Excel excel = Excel(10, 5);
    bool among = true;
    while(among){
        cout << "Co chcesz zrobic?\n 1.Nadpisac komorke\n 2.Zsumowac zawartosci komorek\n 3.Usunac zawartosc komorek\n 4.Wyswietlenie zawartosci\n 5.wyjscie\n";
        int opcja=0;
        cin >> opcja;
        switch (opcja){
            case 1:
            {
                int x,y;
                std::string content;
                cin >> x >> y >> content;
                excel.set_cell(x,y,content);
                break;
            }
            case 2: 
            {
                direction XY = direction::youidiotmoronbaka;// xxd adam ciag dalszy 
                while(!XY) {
                    cout << "Podaj os do sumowania X albo Y\n";
                    cin >> XY;
                    if(!XY) {cout << "fuck kill yourself\n";}//xd daj to do zmiany potem bo partyka sie kurwa zalamie xd
                }
                cout << "Podaj wartos startowa\n";
                int start;
                cin >> start;
                cout << "Podaj wartosc koncowa\n";
                int final;
                cin >> final;
                int level;
                cout << "level\n";
                cin >> level;
                cout << excel.sum_komorki(XY,level,start,final); // sumowanie komorek dodaj do excel amongus
                break;
            }
            case 3:
                break;
            case 4:
            {
                cout << "Zawartosc ktorej komorki ciebie interesuje podaj jej X oraz Y\n";
                int X;
                int Y;
                cin >> X;
                cin >> Y;
                cout << excel.show_cell(X,Y);
                break;
            }
            case 5:
                among = false;// reka adam tu byla
                
                
        }
    }
    std::system("clear");
    excel.destroy();
    return 0;
}
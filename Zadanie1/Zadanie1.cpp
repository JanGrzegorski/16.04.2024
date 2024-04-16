#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class Narzadrozrodczy {
public:
    virtual void smekma() = 0;
    virtual void cmyk() = 0;

};
class Beniz : public Narzadrozrodczy {
private:
    int r;
    const string name = "Dlugosc beniza";

public:
    Beniz(int promien) {
        this->r = promien;
    }
    void smekma(){
        cout << "to jest" << this->name << endl;
    }
    void cmyk() {
        cout << "Wynik dlugosc beniza = " << M_PI * pow(r, 2) << endl;
    }

};
class Ciba :public Narzadrozrodczy {
private:
        int a;
        const string name = "Krztalt Ciby";
public:
       Ciba(int bok) {
            this->a =bok;
        }
        void smekma() {
            cout << "to jest" << this->name << endl;
        }
        void cmyk() {
            cout << "Wynik krztalt Ciby = " << this->a*a << endl;
        }

    };
class Kakalek :public Narzadrozrodczy {
private:
    int a;
    int b;
    const string name = "Krztalt Ciby";

public:
    Kakalek(int bok1, int bok2) {
        this->a = bok1;
        this->b = bok2;
    }
    void smekma() {
        cout << "to jest" << this->name << endl;
    }
    void cmyk() {
        cout << "Wynik krztalt Ciby = " << this->a * this->b << endl;
    }

};
void przelaczObiekt(Narzadrozrodczy& ob) {
    ob.smekma();
    ob.cmyk();

};



int main()
{
    setlocale(LC_ALL, "");
    cout << "Polimorfizm z użyciem funkcji z parametrem\n";
    int menu;
    Beniz beniz(3); Ciba ciba(4); Kakalek kakalek(2,3);
    cout << "1-Beniz,2-Ciba,3-Kakalek,inne-brak: "; cin >> menu;
    switch (menu)
    {
    case 1:
            przelaczObiekt(beniz);
            break;
    case 2:
             przelaczObiekt(ciba);
             break;
    case 3:
             przelaczObiekt(kakalek);
             break;
       default:
           cout << "Nie ma takiego Krztałtu" << endl;
           break;
}


    return EXIT_SUCCESS;
}

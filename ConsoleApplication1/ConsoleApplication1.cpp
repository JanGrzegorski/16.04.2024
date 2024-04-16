#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class Postac {
public:
    virtual void opisPostaci() = 0;
    virtual void walka() = 0;
    virtual void umiejetnosci() = 0;
};
class Wojownik : public Postac {
private:
    string name;
    int sila;
    int mana;
    int zycie;
    int doswiadczenie;


public:
    Wojownik(string name, int sila, int mana,int doswiadczenie,int zycie = 110) {
        this->name = name;
        this->sila = sila;
        this->mana = mana;
        this->zycie = zycie;
        this->doswiadczenie = doswiadczenie ;
    }
    virtual void opisPostaci() {
        cout << "to jest wojownik:" << this->name << endl;
        cout << "Sila:" << this->sila << endl;
        cout << "Mana:" << this->mana << endl;
        cout << "Zycie:" << this->zycie << endl;
        cout << "Doswiadczenie:" << this->doswiadczenie << endl;
    }
    void walka() {
        cout << "Bron biala" << endl;
    }
    void umiejetnosci() {
        cout << "Rzut mieczem" << endl;
    }

};
class Żyd : public Postac {
private:
    string name;
    int sila;
    int mana;
    int zycie;
    int doswiadczenie;


public:
    Żyd(string name, int sila, int mana, int doswiadczenie, int zycie = 70) {
        this->name = name;
        this->sila = sila;
        this->mana = mana;
        this->zycie = zycie;
        this->doswiadczenie = doswiadczenie;
    }
    virtual void opisPostaci() {
        cout << "to jest Żyd:" << this->name << endl;
        cout << "Sila:" << this->sila << endl;
        cout << "Mana:" << this->mana << endl;
        cout << "Zycie:" << this->zycie << endl;
        cout << "Doswiadczenie:" << this->doswiadczenie << endl;
    }
    void walka() {
        cout << "Różdzka" << endl;
    }
    void umiejetnosci() {
        cout << "Potężna kula ognia" << endl;
    }

};
class Czarnix : public Postac {
private:
    string name;
    int sila;
    int mana;
    int zycie;
    int doswiadczenie;


public:
    Czarnix(string name, int sila, int mana, int doswiadczenie, int zycie = 180) {
        this->name = name;
        this->sila = sila;
        this->mana = mana;
        this->zycie = zycie;
        this->doswiadczenie = doswiadczenie;
    }
    virtual void opisPostaci() {
        cout << "to jest wojownik Czarnix:" << this->name << endl;
        cout << "Sila:" << this->sila << endl;
        cout << "Mana:" << this->mana << endl;
        cout << "Zycie:" << this->zycie << endl;
        cout << "Doswiadczenie:" << this->doswiadczenie << endl;
    }
    void walka() {
        cout << "Maczuga" << endl;
    }
    void umiejetnosci() {
        cout << "Szybkość podczas głodu" << endl;
    }

};
class Szczur : public Postac {
private:
    string name;
    int sila;
    int mana;
    int zycie;
    int doswiadczenie;


public:
    Szczur(string name, int sila, int mana, int doswiadczenie, int zycie = 200) {
        this->name = name;
        this->sila = sila;
        this->mana = mana;
        this->zycie = zycie;
        this->doswiadczenie = doswiadczenie;
    }
    virtual void opisPostaci() {
        cout << "to jest Szczur:" << this->name << endl;
        cout << "Sila:" << this->sila << endl;
        cout << "Mana:" << this->mana << endl;
        cout << "Zycie:" << this->zycie << endl;
        cout << "Doswiadczenie:" << this->doswiadczenie << endl;
    }
    void walka() {
        cout << "Miłość do jeżyka" << endl;
    }
    void umiejetnosci() {
        cout << "Rzut jeżykiem z pół obrotu" << endl;
    }

};
int main()
{
    setlocale(LC_ALL, "");
    cout << "Polimorfizm z użyciem wskaźnika\n";
    Postac* wsk;
    Wojownik wojownik("Arkadiusz Waliczek", 10000000000, 70, 200);
    Żyd żyd("Jakub Moliński", 1, 20, 120);
    Czarnix czarnix("Stanisław Skowroński", 100, 10, -10);
    Szczur szczur("Jakub Nikiel", 10000, 20, 50);
    int menu;
    cout << "1-Wojownik,2-Żyd,3-Czarnix,4-Szczur,inne-brak: "; cin >> menu;
    switch (menu)
    {
    case 1:
        wsk = &wojownik;
        wsk->opisPostaci();
        wsk->walka();
        wsk->umiejetnosci();
        break;
    case 2:
        wsk = &żyd;
        wsk->opisPostaci();
        wsk->walka();
        wsk->umiejetnosci();
        break;
    case 3:
        wsk = &czarnix;
        wsk->opisPostaci();
        wsk->walka();
        wsk->umiejetnosci();
        break;
    case 4:
        wsk = &szczur;
        wsk->opisPostaci();
        wsk->walka();
        wsk->umiejetnosci();
        break;
    default:
        cout << "Nie ma takiej Postaci" << endl;
        break;
    }
    return EXIT_SUCCESS;
}

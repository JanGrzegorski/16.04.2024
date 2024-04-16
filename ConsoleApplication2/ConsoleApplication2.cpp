#define _USE_MATH_DEFINES //Jan Grzegorski
#include <iostream>
#include <math.h>
using namespace std;
//Klasa Abstrakcyjna
class Robotnik {
public:
    virtual void opisRobotnika() = 0;
    virtual void stawka() = 0;
    virtual void miesieczne_wynagrodzenie() = 0;
};
class Pracownik: public Robotnik { //Klasa Pracownik
private:
    string name;
    int wynagrodzenie;
    int wyplata;
public:
    Pracownik(string name, int wynagrodzenie, int wyplata) {
        this->wynagrodzenie = wynagrodzenie;
        this->wyplata = wyplata;
    }
    virtual void opisRobotnika(){
        cout << "to jest Pracownik" << this->name << endl;
    }
    virtual void stawka() {
        cout << "Stawka godzinna = "<< this->wynagrodzenie<< endl;
    }
    virtual void miesieczne_wynagrodzenie() {
        cout << "Miesieczne_wynagrodzenie = "<< this->wynagrodzenie * 160 << endl; //Obliczenie miesięczego wynagrodzenia bez podaku 
    }
};
class Kierownik : public Robotnik { //Klasa Kierownik
private:
    string name;
    int wynagrodzenie;
    int wyplata;
public:
    Kierownik(string name, int wynagrodzenie, int wyplata) {
        this->wynagrodzenie = wynagrodzenie;
        this->wyplata = wyplata;
    }
    virtual void opisRobotnika() {
        cout << "to jest Kierownik" << this->name << endl;
    }
    virtual void stawka() {
        cout << "Stawka godzinna = " << this->wynagrodzenie << endl;
    }
    virtual void miesieczne_wynagrodzenie() {
        cout << "Miesieczne_wynagrodzenie = " << this->wynagrodzenie * 40 * 4 << endl; //Obliczenie miesięczego wynagrodzenia bez podaku 
    }
};
class Programista : public Robotnik { //Klasa Programista
private:
    string name;
    int wynagrodzenie;
    int wyplata;
public:
    Programista(string name, int wynagrodzenie, int wyplata) {
        this->wynagrodzenie = wynagrodzenie;
        this->wyplata = wyplata;
    }
    virtual void opisRobotnika() {
        cout << "TO jest Programista: " << this->name << endl;
    }
    virtual void stawka() {
        cout << "Stawka godzinna: " << this->wynagrodzenie << endl;
    }
    virtual void miesieczne_wynagrodzenie() {
        cout << "Miesieczne_wynagrodzenie:  " << this->wynagrodzenie * 160 << endl; //Obliczenie miesięczego wynagrodzenia bez podaku 
    }
};
class Handlarz : public Robotnik { // Klasa Handlarz
private:
    string name;
    int wynagrodzenie;
    int wyplata;
public:
    Handlarz(string name, int wynagrodzenie, int wyplata) {
        this->wynagrodzenie = wynagrodzenie;
        this->wyplata = wyplata;
    }
    virtual void opisRobotnika() {
        cout << "to jest Handlarz" << this->name << endl;
    }
    virtual void stawka() {
        cout << "Stawka godzinna = " << this->wynagrodzenie << endl;
    }
    virtual void miesieczne_wynagrodzenie() {
        cout << "Miesieczne_wynagrodzenie = " << this->wynagrodzenie * 160 << endl; //Obliczenie miesięczego wynagrodzenia bez podaku 
    }
};
int main()
{
    string name;                            //Wprowadzanie danych Robotnika z wynagrodzeniem
    cout << "Podaj imie :"; cin >> name;
    int wynagrodzenie;
    cout << "Podaj wynagrodzenie :"; cin >> wynagrodzenie;
    setlocale(LC_ALL, "");
    Robotnik * wsk;
    Pracownik pracownik(name,wynagrodzenie,00);
    Kierownik kierownik(name, wynagrodzenie, 00);
    Programista programista(name, wynagrodzenie, 00);
    Handlarz handlarz(name, wynagrodzenie, 00);
    int menu;
    cout << "1-Pracownik,2-Kierownik,3-Programista,4-Handlarz,5-Ni ma : "; cin >> menu;
    switch (menu)//Wybór Robotnika
    {
    case 1: //jesli wybrał pracownika
        wsk = &pracownik;
        wsk->opisRobotnika();
        wsk->stawka();
        wsk->miesieczne_wynagrodzenie();
        break;
    case 2: //jeśli wybrał kierownika
        wsk = &kierownik;
        wsk->opisRobotnika();
        wsk->stawka();
        wsk->miesieczne_wynagrodzenie();
        break;
    case 3: // jeśli wybrał programiste
        wsk = &programista;
        wsk->opisRobotnika();
        wsk->stawka();
        wsk->miesieczne_wynagrodzenie();
        break;
    case 4: // jeśli wybrał handlarza
        wsk = &handlarz;
        wsk->opisRobotnika();
        wsk->stawka();
        wsk->miesieczne_wynagrodzenie();
        break;
    default: // jeśli nie wybrał któregoś z tych 4 
        cout << "Nie ma takiego pracownika" << endl;
        break;
    }
    return EXIT_SUCCESS;
}

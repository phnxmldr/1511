#include <iostream>
#include <math.h>
#include <fstream>
using namespace std ;
ofstream file;

class Uczen {
public :
string imie, nazwisko;
int klasa;
float a;
float b;
float c;
float srednia;
void dodajUcznia(){
cout<<"Podaj dane ucznia"<<endl;
cout<<"Imie - "<<endl; cin>>imie;
cout<<"Nazwisko - "<<endl; cin>>nazwisko;	
cout<<"Klase - "<<endl; cin>>klasa;
cout<<"Ocena z polskiego"<<endl;cin>>a;
cout<<"Ocena z matematyki"<<endl;cin>>b;
cout<<"Ocena z fizyki"<<endl;cin>>c;
}
void sredniaOcen(){
srednia = (a + b + c)/3;
}
void wyswietlDane() {
cout<< "Imie : "<<imie<< endl;
cout<<"Nazwisko : "<< nazwisko<< endl;
cout<<"Klasa :"<<klasa<<endl;

}

void wyswietlOceny(){
cout<<"Ocena z polskiego : "<<a<<endl;
cout<<"Ocena z matematyki : "<<b<<endl;
cout<<"Ocena z fizyki : "<<c<<endl;
cout<<"Srednia - "<<srednia<<endl;
}

void metryczka(){
	cout<<"Program napisal \n Amir Berezhnov \n";
	};
};

void text(string imie1, string imie2, string nazwisko1, string nazwisko2, int klasa1, int klasa2){
file.open("uczniowie.txt");
file<<"Uczen 1 - "<<endl;
file<< "Imie : "<<imie1<< endl;
file<<"Nazwisko : "<< nazwisko1<< endl;
file<<"Klasa : "<<klasa1<<endl;
file<<"Uczen 2 - "<<endl;
file<< "Imie : "<<imie2<< endl;
file<<"Nazwisko : "<< nazwisko2<< endl;
file<<"Klasa : "<<klasa2<<endl;
file.close();
	
}

void porownanieOcen(int ocena1, int ocena2){
	if(ocena1 > ocena2){
		cout<<"Srednia ocena ucznia 1 wieksza";
	}else if(ocena1 == ocena2){
		cout<<"Oceny sa jednakowi";
	}else{
		cout<<"Srednia ocena ucznia 2 wieksza";
	}
}

int main () {
Uczen uczen;
uczen.metryczka();
uczen.dodajUcznia();
uczen.sredniaOcen();
uczen.wyswietlDane();
uczen.wyswietlOceny();


Uczen uczen2;
uczen2.dodajUcznia();
uczen2.sredniaOcen();
uczen2.wyswietlDane();
uczen2.wyswietlOceny();

porownanieOcen(uczen.srednia, uczen2.srednia);
text(uczen.imie, uczen2.imie, uczen.nazwisko, uczen2.nazwisko, uczen.klasa, uczen2.klasa);
}

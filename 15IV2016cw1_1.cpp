#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cmath>
using namespace std;

class zespolone{
				private:
					double re;
					double im;
				public:
					//konstruktor (nzaywa si� tak jak klasa) :
					zespolone(double real=0, double imag=0) { re=real;im=imag; }
					//konstruktor kopiuj�cy:
					zespolone(const zespolone &z) {re=z.re; im=z.im; }
					
					
					//przyk�adowe metody:
					double real() { return re; }
					double imag() { return im; }
					
					zespolone operator-() { //jednoargumentowy operator minus
						zespolone wynik;
						wynik.re=-re; wynik.im=-im;
						return wynik; }
					
					zespolone operator+(const zespolone &z) { //dwuargumentowy operator plus
						zespolone wynik;
						wynik.re=re+z.re; wynik.im=im+z.im;
						return wynik; }
					
					//prosz� napisa� dzia�ania -, * i / (odejmowanie, mno�enie i dzielenie)
					
					
					
					
					
					
					
					//funkcje zaprzyja�nione mog� korzysta� z p�l prywatnych:
					friend zespolone sqrt(const zespolone &z);
					friend istream &operator >>(istream &is, zespolone &z);
					friend ostream &operator <<(ostream &os, const zespolone &z);				
					
};

	// przeci��one operatory wej�cia - wyj�cia:
	istream &operator >>(istream &is, zespolone &z){ is >> z.re >> z.im ; return is; }

	ostream &operator <<(ostream &os, const zespolone &z){
					os << '(' << z.re << ")+(" << z.im << ")*i"; return os; }

	//prosz� napisa� funkcj� przeci��on� sqrt (pierwiastek):
	zespolone sqrt(const zespolone &z) {
	}

	// Doda� funkcj� norm (re^2+im^2), abc ( sqrt(re^2+im^2) ), conj ( sprz�enie
	// zespolone: re-im*i), por�wnywanie (operator ==).



	int main(){
		zespolone dwa(2,0); //wywo�anie konstruktora
		zespolone cztery(4);
		zespolone a, b, c;
		zespolone delta, x1, x2;
		cout << "Program wylicza zespolone pierwiastki r-nia kwadratowego\n";
		cout << "ax^2+bx+c=0" << endl;
		cout << "Podaj czesc rzeczywista i urojona a: ";
		cin >> a ;
		//podobnie dla b i c
		// obliczy� delta, x1, x2
		// wy�wietli� wynik		
		
		
		
		
		
		
		
	}

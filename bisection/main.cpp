#include <iostream>
#include <iomanip>

//Sprawdzana funkcja
double funkcja(double x) {
	double fun = x - 3;
	return fun;
}
//Funkcja wykonujaca bisekcje
void bisekcja(double a, double b) {
	double s, wynik, eps = 0.000001;
	do {
		std::cout << "Sprawdzany przedzial " << "[" << std::setprecision(9) << a << "," << b << "]\n";
		s = (a + b) / 2;
		
		if (funkcja(s) == 0) {
			std::cout << "Udalo sie, znaleziony pierwiastek to x= " << s;
		}
		else {
			if (funkcja(a) * funkcja(s) < 0)
				b = s;
			else
				a = s;
		}
	} while (funkcja(s) != 0 && b - a > eps);
	if (funkcja(s) != 0)std::cout << "Pierwiastek znajduje sie w przedziale [" << std::setprecision(9) << a << "," << b << "]";
}
//Glowna funkcja programu, wczytywanie liczb do przedzialu
void main() {
	double a, b;
	do {
		std::cout << "Podaj poczatek przedzialu\n";
		std::cin >> a;
		std::cout << "Podaj koniec przedzialu\n";
		std::cin >> b;
		if (a > b) std::cout << "Wprowadzono niepoprawny przedzial, wprowadz ponownie!\n";
	} while (a > b);

	if (funkcja(a) == 0) std::cout << "Udalo sie, znaleziony pierwiastek to x= " << a;
	else if (funkcja(b) == 0) std::cout << "Udalo sie, znaleziony pierwiastek to x= " << b;
	else if (funkcja(a)*funkcja(b) > 0) std::cout << "Pieriwastek nie znajduje sie w zadanym przedziale";
	else bisekcja(a, b);
}




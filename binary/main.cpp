#include <iostream>


void wczytywanie(int t[], int n){
	for (int i = 0; i < n; i++)
	{
		std::cout << "Podaj " << i + 1 << " element tablicy: ";
		std::cin >> t[i];
	}
}
void wypisywanie(int t[], int n) {
	std::cout << "[ ";
	for (int i = 0; i < n; i++)
	{
		std::cout << t[i] << " ";
	}
	std::cout << "]\n";

}
void sortowanie(int t[], int n) {
	int buf;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (t[j] > t[j + 1]) {
				buf = t[j];
				t[j] = t[j + 1];
				t[j + 1] = buf;
			}
		}
	}
}
void szukanie(int t[], int n, int a)
{
	int m,l=0, p=n-1, f=0;
	while (l <= p)
	{
		m = (l + p) / 2;
		if (t[m] == a) {
			std::cout << "Znaleziono na miejscu: " << m + 1<<"\n";
			f = 1;
		}
		if (t[m] > a)
			p = m - 1;
		else
			l = m + 1;
	}
	if(f==0)std::cout << "Nie znaleziono";
}
void main() {

	int rozmiar,liczba;
	do {
		std::cout << "Podaj rozmiar tablicy ";
		std::cin >> rozmiar;
	} while (rozmiar <= 0);
	std::cout << rozmiar;
	int* tab = new int[rozmiar];
	wczytywanie(tab, rozmiar);
	std::cout << "Zadeklarowana tablica: "; wypisywanie(tab, rozmiar);
	sortowanie(tab, rozmiar);
	std::cout << "Posortowana tablica: "; wypisywanie(tab, rozmiar);
	std::cout << "Podaj wyszukiwany element ";
	std::cin >> liczba;
	szukanie(tab, rozmiar, liczba);
}
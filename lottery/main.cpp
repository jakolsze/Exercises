#include <iostream>

void select(int t[], int w, int n) {
int p = n,j = 0;
srand(time(NULL));
for (int i = 1; i <= n; i++)
{
	double prawd = (double)w / (double)p;
	double los = (double)rand() / (double)(RAND_MAX + 1.0);
	if (los < prawd) {
		t[j] = i;
		j++;
		w--;
		}
	p--;
	}
}
void wypisywanie(int t[], int n) {
	std::cout << "------WYLOSOWANE LICZBY--------\n";
	std::cout << "[ ";
	for (int i = 0; i < n; i++)
	{
		std::cout << t[i] << " ";
	}
	std::cout << "]\n";

}
void main() {
	int m, n;
	do {
		std::cout << "Z ilu liczb chcesz losowac?\n";
		std::cin >> n;
		std::cout << "Ile liczb wyloswac?\n";
		std::cin >> m;
		if (m > n || m <= 0 || n <= 0)
			std::cout << "Podano niepoprawne wartosci, wprowadz jescze raz\n";
	} while (m > n || m <= 0 || n <= 0);
	
	int* tab = new int[m];
	select(tab, m, n);
	wypisywanie(tab, m);
}



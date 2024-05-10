#include <iostream>
#include <cmath>

double funkcja(double x) {
    return x * x * x; 
}

double ppochodna(double x, double h) {
    double ppochodna = (funkcja(x + h) - funkcja(x - h)) / (2 * h);
    return ppochodna;
}

double dpochodna(double x, double h) {
    double dpochodna = (funkcja(x + h) + funkcja(x - h) - 2 * funkcja(x)) / (h * h);
    return dpochodna;
}

void main() {
    
    double p = 3.0;
    double h = 0.0001;
    double pierwsza_pochodna = ppochodna(p,h);
    double druga_pochodna = dpochodna(p,h);

    std::cout << "Pierwsza pochodna dla " << p << " wynosi: " << pierwsza_pochodna << "\n";
    std::cout << "Druga pochodna dla " << p << " wynosi: " << druga_pochodna << "\n";
}

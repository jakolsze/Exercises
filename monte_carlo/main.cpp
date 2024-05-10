#include <iostream>                        
#include <cstdlib>

using namespace std;

double f(double x)
{
    return x * x;
}

double mc(double a, double b, int n)
{
        double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double los = a + (rand() * 1.0 / RAND_MAX) * (b - a);       
        sum = sum + f(los);
    }
    return (b - a) / n * sum;

}
void main()                                      
{
    double a, b;                                
    int n;    
    do {
        cout << "Dolna wartosc przedzialu: " << endl;
        cin >> a;
        cout << "Gorna wartosc przedzialu: " << endl;
        cin >> b;
    } while (a > b);
    cout << "Ilosc powtorzen: " << endl;
    cin >> n;

    double wynik = mc(a, b, n);                 

    cout << "Wynik calkowania: " << wynik << endl;
}




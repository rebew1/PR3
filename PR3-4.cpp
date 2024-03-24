#include <iostream>
#include <math.h>
#include <random>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n = 0; 
    int a[20];
    for (int i = 0; i < 20; i++) 
    {
        a[i] = rand();
        cout << a[i] << " ";
        if (i % 2 != 0 && i != 0) 
        { 
            n += a[i];
        }
    }
    cout << "\n" << "Сумма значений чётных по порядку:" << "\n" << n << "\n";
    cout << "Новая команда"
}
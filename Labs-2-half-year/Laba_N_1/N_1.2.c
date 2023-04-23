#include <iostream>
using namespace std;
int power(double a, double b, double d, int n, int i)
{
    if (n > 0)
    {
        for (i = 1; i < n; i++)
        {
            a = d * b;
            d = a;
        }
    }
    else if (n < 0)
    {
        a = 1;
        for (i = 0; i > n; i = i - 1)
        {
            a = a / b;
        }
    }
    else if (n == 0)
    {
        a = 1;
    }
    
    return a;
}
void main() 
{
    setlocale(LC_ALL, "Ru");
    double a, b, d;
    int n, i;
    cout << "Введите число:" << endl;
    cin >> a;
    b = a;
    d = a;
    cout << "Введите степень:" << endl;
    cin >> n;
    cout << a << endl;
}
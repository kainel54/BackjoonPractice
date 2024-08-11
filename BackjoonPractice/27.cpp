#include <iostream>
#include <math.h>
using namespace std;

void convert(int decimal, int b)
{
    if (decimal % 10 == 0) return;
    convert(decimal / b, b);
    cout << decimal % b;
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    int decimal = 0, d = 0;
    while (n != 0)
    {
        decimal += (n % 10) * (int)pow(a, d);
        n /= 10;
        d++;
    }

    convert(decimal, b);
}
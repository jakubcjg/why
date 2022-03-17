#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    cout << "Ile liczb pierwszych chcesz wyswietlic? : ";
    cin >> a;
    int b = 2;
    if (a >= b)
    {
        cout << b << endl;
        b++;
        for (int d = 3; a >= d; d++)
        {
            cout << b << endl;
            b++;
            for (int c = 1; c < b - 1; c++)
            {
                if (!(b % c))
                {
                    b++;
                    d++;
                }
            }
        }
    }
    _getch();
}
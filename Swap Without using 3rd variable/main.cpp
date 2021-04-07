#include <iostream>

using namespace std;

void Swap(int,int);
void Swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "x = " << a << endl;
    cout << "y = " << b << endl;
    return;
}
main ()
{
    int a,b;
    cout << "Enter x = ";
    cin >> a;
    cout << "Enter y = ";
    cin >> b;
    Swap(a,b);
}

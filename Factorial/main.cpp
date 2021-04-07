#include <iostream>

using namespace std;

int main()
{
    int x,fact=1;
    cout<<"Enter a Number = ";
    cin>>x;
    for (int i=1; i<=x; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial = "<<fact;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char x;
    cout << "Enter A = ";
    cin >> a;
    cout << "Enter B = ";
    cin >> b;
    cout << "Enter operation (For Average please Enter only \"A\") = ";
    cin >> x;
    if (x=='+')
    {
            cout << "A+B = "<< a+b;
    }
        else if (x=='-')
        {
            cout << "A-B = "<< a-b;
        }
    else if(x=='*')
        {
            cout << "A*B = "<< a*b;
        }
        else if(x=='/')
        {
            cout << "Quotient = "<< a/b<< endl;
            cout << "Remainder = "<< a%b;
        }
    else if(x=='%')
        {
            cout << "A%B = " << a%b;
        }
     else if (x=='^' )
        {
            cout << "A^A = "<< a*a;
        }
        else if(x=='A')
        {
            cout<<"Average = "<<a+b/2;
        }
    return 0;
}

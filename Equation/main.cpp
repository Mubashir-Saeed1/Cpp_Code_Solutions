#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<< "Enter a = ";
    cin >> a;
    cout<< "Enter b = ";
    cin >> b;
    cout<< "Enter c = ";
    cin >> c;
    cout<< "Enter d = ";
    cin >> d;
    cout<< "Enter e = ";
    cin >> e;
    float eq;
    eq=((a*a*a)+(b*b)-d/b)/(a*(b+c*(e+a)/b)-10);
    cout << "Answer = " << eq;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter A ";
    cin >>a;
    cout << "Enter B ";
    cin >>b;
    int C=a&b;
    int D=a|b;
    int E=~a;
    int F=a^b;
    cout << "A AND B = " << C << endl;
    cout << "A OR B = " << D << endl;
    cout << "NOT of A = " << E << endl;
    cout << "A XOR B = " << F << endl;
    return 0;
}

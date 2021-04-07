#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter integer to check its bit#4 ";
    cin >> x;
    y=8&x;
    y=!!y;
    cout << "Its bit#4 is " << y << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter integer to check its 4th bit ";
    cin >> x;
    y=8&x;
    y=!y;
    cout << y;
    return 0;
}

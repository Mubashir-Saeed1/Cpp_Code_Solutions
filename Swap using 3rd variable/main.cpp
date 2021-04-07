#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    z=y;
    y=x;
    x=z;
    cout << "x = "<< x << endl;
    cout << "y = "<< y;
    return 0;
}

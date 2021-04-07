#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter a Number = ";
    cin >>x;
    if (x<=25 && x>=1)
    {
        for (y=1; y<=x; y++)
        {
            cout<<"*";
        }
    }
    else
    {
        cout<<"The Number you Entered is out of Range ";
    }
    return 0;
}

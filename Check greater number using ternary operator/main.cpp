#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter 1st Number = ";
    cin>>a;
    cout<<"Enter 2nd Number = ";
    cin>>b;
    (a>b)? cout<<"1st Number is greater" :
        (b>a)? cout<<"2nd Number is greater" : cout<<"Both Numbers are equal";
    return 0;
}

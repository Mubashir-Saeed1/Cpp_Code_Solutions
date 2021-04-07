#include <iostream>

using namespace std;

int sum (int a)
{
    if (a==0)
        return 0;
    else
        return sum(a)+sum(a-1);
    return sum(a);
}
int main()
{
    int a;
    cout<<"Enter the value of n = ";
    cin>>a;
    cout<<sum(a);
}

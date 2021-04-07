#include <iostream>

using namespace std;

int fact(int a)
{
    int b=1;
    for(int i=a; i>0; i--)
    {
        b=b*i;
    }
    return b;
}
int main()
{
    int a=1;
    while(a<=35)
    {
        cout<<"Factorial of "<<a<<" = "<<fact(a)<<endl;
        a++;
    }
    return 0;
}

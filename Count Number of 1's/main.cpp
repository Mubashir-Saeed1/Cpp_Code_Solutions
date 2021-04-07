#include <iostream>

using namespace std;

void count1(int a)
{
    int b=0,c;
    while (a!=0)
    {
        c=a&1;
        if(c==1)
        {
            b++;
        }
        a>>=1;
        c=a;
    }
    cout<<b;
}
int main()
{
    int x;
    cout<<"Enter an Integer to Count Number of 1's in it = ";
    cin>>x;
    count1(x);
    return 0;
}

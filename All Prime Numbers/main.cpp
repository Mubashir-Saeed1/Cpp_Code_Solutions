#include <iostream>

using namespace std;

bool Prime(int a)
{
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            return false;

        }
    }
    return true;
}

int main()
{
    for(int i=2;i<=1000;i++)
    {
        if(Prime(i))
            cout<<i<<"\t";
    }
    return 0;
}

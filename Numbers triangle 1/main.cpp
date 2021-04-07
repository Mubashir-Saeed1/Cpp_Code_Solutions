#include <iostream>

using namespace std;

int main()
{
    int a,b,c=1;
    for(a=1; a<=5; a++)
    {
        for(b=1; b<=c; b++)
        {
            cout<<b*b<<" ";
        }
        c++;
        cout<<"\n";
    }
    return 0;
}

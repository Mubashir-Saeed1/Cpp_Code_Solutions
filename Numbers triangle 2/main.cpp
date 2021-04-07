#include <iostream>

using namespace std;

int main()
{
    for (int a=1; a<=5; a++)
    {
        int c=a;
        for(int b=5; b>=a; b--)
        {
            cout<<c<<"  ";
            c+=b;
        }
        cout<<"\n";
    }
    return 0;
}

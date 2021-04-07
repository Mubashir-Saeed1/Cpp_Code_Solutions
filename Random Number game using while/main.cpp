#include <iostream>

using namespace std;

int main()
{
    int x,i=0,t=0;
    cout<<"Guess the Number = ";
    cin>>x;
    t=t+1;
    while(x!=4 && i<4)
    {if(x>4)
    {
        cout<<">>>>Sorry! Try again with a Lower Number<<<< ";
    }
    else
        {
            cout<<">>>>Sorry! Try again with a Greater Number<<<< ";
        }
        i++;
        cin>>x;
        t=t+1;
    }
    if(x==4)
        cout<<">>>>Congratulations! You Won<<<<"<<endl;
    else
    {
        cout<<">>>>You Lost<<<<"<<endl;
    }
    cout<<"Number of tries = "<<t;

    return 0;
}

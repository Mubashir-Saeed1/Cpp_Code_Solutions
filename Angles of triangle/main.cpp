#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st angle = ";
    cin>>a;
    cout<<"Enter 2nd angle = ";
    cin>>b;
    cout<<"Enter 3rd angle = ";
    cin>>c;
    if (a+b+c==180)
    {
        cout<<"Triangle is valid";
    }
    else
    {
        cout<<"Triangle is not valid";
    }

    return 0;
}

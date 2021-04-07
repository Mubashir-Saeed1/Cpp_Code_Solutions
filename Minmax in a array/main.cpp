#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int a=0,b=0,c=0,d=0,e=9999999;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the Value for index "<<i+1<<" = ";
        cin>>arr[i];
        if(arr[i]==5)
            a++;
        if(arr[i]>5)
            b++;
        if (arr[i]<5)
            c++;
        if (arr[i]>d)
            d=arr[i];
        if (arr[i]<e)
            e=arr[i];
    }
    cout<<"Numbers Equal to 5 = "<<a<<endl;
    cout<<"Numbers Greater than 5 = "<<b<<endl;
    cout<<"Numbers Less than 5 = "<<c<<endl;
    cout<<"Largest Number = "<<d<<endl;
    cout<<"Smallest Number = "<<e<<endl;
    return 0;
}

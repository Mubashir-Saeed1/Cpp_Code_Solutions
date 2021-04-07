#include <iostream>

using namespace std;

int main()
{
    int ar[10],arr[10],x;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>ar[i];
    }
    cout<<endl<<"Array 2"<<endl<<endl ;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<endl<<"Sum of Arrays"<<endl<<endl;
    for(int i=0; i<10; i++)
    {
        x=ar[i]+arr[i];
        cout<<"Value for index "<<i+1<<" = "<<x<<endl;
    }
    return 0;
}

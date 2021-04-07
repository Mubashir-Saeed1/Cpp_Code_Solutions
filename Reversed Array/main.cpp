#include <iostream>

using namespace std;

int main()
{
    int arr[5],rr[5];
    for (int i=0; i<5; i++)
    {
        cout<<"Enter the value of Index "<<i+1<<" = ";
        cin>>arr[i];
    }
    for(int i=0; i<3; i++)
    {
        rr[i]=arr[4-i];
        arr[4-i]=arr[i];
        arr[i]=rr[i];
    }
    cout<<endl<<"Reversed Array"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

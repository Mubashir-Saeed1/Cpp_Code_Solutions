#include <iostream>

using namespace std;

int main()
{
    int arr[5],b;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>arr[i];
    }
            b=arr[0];
    for(int i=0;i<5;i++)
        if(arr[i]>b)
        b=arr[i];
    cout<<"Largest Value = "<<b;
    return 0;
}

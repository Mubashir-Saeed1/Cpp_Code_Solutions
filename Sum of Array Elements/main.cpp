#include <iostream>

using namespace std;

int main()
{
    int arr[10],arr2[10];
    int sum1=0,sum2=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the Value of Array 1 Index "<<i+1<<" = ";
        cin>>arr[i];
        sum1=sum1+arr[i];
    }
    cout<<"\nSum of Array 1 Elements = "<<sum1;
    cout<<"\nArray 2"<<endl<<endl;
    for(int j=0; j<10; j++)
    {
        cout<<"Enter the Value of Array 2 Index "<<j+1<<" = ";
        cin>>arr2[j];
        sum2=sum2+arr2[j];
    }
    cout<<"\nSum of Array 2 Elements = "<<sum2;
    if(sum1>sum2)
        cout<<"Array 1 has Higher Sum Value"<<endl;
    else if(sum2>sum1)
        cout<<"Array 2 has Higher Sum Value";
    return 0;
}

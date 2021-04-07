#include <iostream>

using namespace std;

int main()
{
    int arr[5],arr1[5],sub[5],produc[5];
    cout<<"\nArray 1"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the Value of Index "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<"\nArray 2"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the Value of Index "<<i+1<<" = ";
        cin>>arr1[i];
    }
    cout<<"\nSum of Arrays = [";
    for(int i=0; i<5; i++)
    {
        sub[i]=arr[i]+ arr1[i];
        cout<<sub[i]<<",";
    }
    cout<<"]";
    cout<<"\n\nProduct of Arrays = [";
    for(int i=0; i<5; i++)
    {
        produc[i]=arr[i]*arr1[i];
        cout<<produc[i]<<",";
    }
    cout<<"]"<<endl;
    return 0;
}

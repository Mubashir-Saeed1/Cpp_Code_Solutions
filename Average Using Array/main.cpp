#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int sum=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter Value for index "<<i+1<<" = ";
        cin>>arr[i];
    }
    for(int i=0; i<10; i++)
    {
        sum=sum+arr[i];
    }
    int average=sum/10;
    cout<<"Average = "<<average;
    return 0;
}

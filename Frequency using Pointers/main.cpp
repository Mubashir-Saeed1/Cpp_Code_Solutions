#include <iostream>

using namespace std;
 fre(int *arr,int a,int b)
{
    b=0;
    for(int i=0;i<5;i++)
    {
        if(*(arr+i)==a)
            b++;
    }
    cout<<"Frequency of Given Number = "<<b;
}
int main()
{
    int arr[5],a,b;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<"Enter the Number you want to Check Frequency = ";
    cin>>a;
    fre(arr,a,b);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int a=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the Value for index "<<i+1<<" = ";
        cin>>arr[i];
        if(arr[i]==5)
            a++;
    }
    cout<<"Frequency of 5 = "<<a;
    return 0;
}

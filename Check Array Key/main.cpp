#include <iostream>

using namespace std;

int main()
{
    int arr[6],b,temp=0;
    for(int i=0; i<6; i++)
    {
        cout<<"Enter value for Index "<<i+1<<" = ";
        cin>>arr[i];
    }
        cout<<"Enter a Value = ";
        cin>>b;
    for(int i=0; i<6; i++)
    {
        if (b==arr[i])
        {
            temp=1;
            cout<<"\nIndex number = "<<i+1;
        }
    }
    if (temp==0)
    cout<<"Invalid Value";
    return 0;
}

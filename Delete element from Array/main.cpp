#include <iostream>

using namespace std;

int main()
{
    int arr[5],a;
    cout<<"Enter the Values : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(arr+i);
    }
    cout<<"Enter the Position Where you want to Delete an Element ";
    cin>>a;
    a=a-1;
    for(int i=a;i<5;i++)
    {
        *(arr+i)=*(arr+(i+1));
    }
    cout<<"Expected Output : ";
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i);
    }
    return 0;
}

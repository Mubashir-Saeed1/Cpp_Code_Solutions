#include <iostream>

using namespace std;

void sor(int arr[5])
{
	int a;
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    		if(arr[j]>arr[j+1])
        	{
				a=arr[j+1];
        		arr[j+1]=arr[j];
        		arr[j]=a;
        	}
		}
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<"   ";
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>arr[i];
    }
    sor(arr);
    return 0;
}

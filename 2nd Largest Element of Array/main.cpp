#include <iostream>

using namespace std;

int large(int *arr)
{
	int large=0,slarge=0;
	for (int i=0;i<5;i++)
	{
		if(*(arr+i)>large)
		large=*(arr+i);
	}
	for(int i=0;i<5;i++)
	{
		if(*(arr+i)>slarge && *(arr+i)<large)
		slarge=*(arr+i);
	}
	return slarge;
}
void display(int a)
{
	cout<<a;
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Value for Index "<<i+1<<" = ";
        cin>>*(arr+i);
    }
	int slarge=large(arr);
	display(slarge);
    return 0;
}

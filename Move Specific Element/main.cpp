#include <iostream>
using namespace std;
void move(int *arr,int *a)
{
	int *b;
	for(int i=0;i<10;i++)
	{
		int temp=*(arr+i),j;
		for(j=i-1;i>=0 && *(arr+j)==*a;j--)
		{
			*(arr+j+1)=*(arr+j);
		}
		*(arr+j+1)=temp;
	}
	for(int i=0;i<10;i++)
	{
		cout<<*(arr+i);
	}
}
void input(int *arr,int *a)
{
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Value for Index "<<i+1<<" = ";
		cin>>*(arr+i);
	}
	cout<<"Enter the Element you Want to Move = ";
	cin>>*a;
}
int main() {
	int arr[10],a;
	input(arr,&a);
	move (arr,&a);
	return 0;
}

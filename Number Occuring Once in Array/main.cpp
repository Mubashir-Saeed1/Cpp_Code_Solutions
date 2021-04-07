#include <iostream>
using namespace std;

int main() {
	int arr[10],j=1;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Value for Index "<<j<<" = ";
		cin>>arr[i];
		j++;
	}
	cout<<"The Numbers that appeared Onced in the Array are ";
	for(int i=0;i<10;i++)
	{
		int k=0;
		for(int j=0;j<10;j++)
		{
			if(arr[i]==arr[j])
			k++;
		}
		if(k=0)
		cout<<arr[i]<<"   ";
	}
	return 0;
}

#include <iostream>

using namespace std;
void mean(int arr[10])
{
	arr[10];
	int sum=0;
	float mean;
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	mean=sum/10.0;
	cout<<"Mean = "<<mean<<endl;
}
void median(int arr[10])
{
	arr [10];
	int sum=0;
	float median;
	sum=arr[5]+arr[6];
	median=sum/2.0;
	cout<<"Median = "<<median<<endl;
}
void mode(int arr[10])
{
	int mod;
	arr[10];
	for(int i=0;i<10;i++)
	for(int j=i;j<10;j++)
	if(arr[j]==arr[j+1])
	mod=arr[j];
	cout<<"mode is : "<<mod<<endl;
}
int main(int argc, char** argv) {
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Value For Index "<<i+1<<" = ";
		cin>>arr[i];
	}
	mean(arr);
	median(arr);
	mode(arr);
	return 0;
}

#include <iostream>
using namespace std;
void rec(int [][10])
{
	int arr[3][10];
	for(int i=0;i<10;i++)
	{
		float sum=0.0,avg=0.0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[j][i];
		}
		avg=sum/3;
		if(avg>75)
		cout<<"Student "<<i+1<<" is Eligible for Writing in exam"<<endl;
		else if(avg<75 && avg>65)
		cout<<"Student "<<i+1<<" is in Condolation List"<<endl;
		else if(avg<65)
		cout<<"Student "<<i+1<<" is not Eligible for Writing in exam"<<endl;

	}
}
int main() {
	int arr[3][10];
	for(int i=0;i<3;i++)
	{
		cout<<"\nSubject "<<i+1<<endl<<endl;
		for(int j=0;j<10;j++)
		{
			cout<<"Enter Attendance Percentage in Subject "<<i+1<<" for Student "<<j+1<<" = ";
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	rec(arr);
	return 0;
}

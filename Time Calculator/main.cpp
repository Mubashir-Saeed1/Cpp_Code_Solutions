#include <iostream>
using namespace std;
struct time{
	int hour,minute,second;
};
int main() {
	time hour1,hour2,minute1,minute2,second1,second2;
	int nhour=0,nminute=0,nsecond=0,ac;
	cout<<"Time 1"<<endl;
	cout<<"Enter Hour 1 : ";
	cin>>hour1.hour;
	cout<<"Enter Minute 1 : ";
	cin>>minute1.minute;
	cout<<"Enter Second 1 : ";
	cin>>second1.second;
	cout<<"Time 2"<<endl;
	cout<<"Enter Hour 2 : ";
	cin>>hour2.hour;
	cout<<"Enter Minute 2 : ";
	cin>>minute2.minute;
	cout<<"Enter Second 2 : ";
	cin>>second2.second;
	cout<<"Enter Number 1 to add and 2 to Subtract = ";
	cin>>ac;
	if(ac==1)
	{
		nsecond=second1.second+second2.second;
		if(nsecond>60)
		nsecond-=60;
		nminute++;
		nminute=minute1.minute+minute2.minute;
		if(nminute>60)
		nminute-=60;
		nhour++;
		nhour=hour1.hour+hour2.hour;
	}
	else if(ac==2)
	{
		nsecond=second2.second-second1.second;
		nminute=minute2.minute-minute1.minute;
		nhour=hour2.hour-hour1.hour;
		if(nsecond<0)
		{
			nhour-=1;
			nminute-=1;
			nsecond-=60;
		}
		if(nminute<0)
		{
			nhour-=1;
			nminute+=60;
		}
	}
	cout<<"New second"<<endl;
	cout<<nsecond<<"-"<<nminute<<"-"<<nhour;
	return 0;
}

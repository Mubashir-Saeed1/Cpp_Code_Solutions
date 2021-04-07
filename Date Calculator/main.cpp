#include <iostream>
using namespace std;
struct date{
	int year,month,date;
};
int main() {
	date year1,year2,month1,month2,day1,day2;
	int nyear=0,nmonth=0,nday=0,ac;
	cout<<"Date 1"<<endl;
	cout<<"Enter Year 1 : ";
	cin>>year1.year;
	cout<<"Enter Month 1 : ";
	cin>>month1.month;
	cout<<"Enter Date 1 : ";
	cin>>day1.date;
	cout<<"Date 2"<<endl;
	cout<<"Enter Year 2 : ";
	cin>>year2.year;
	cout<<"Enter Month 2 : ";
	cin>>month2.month;
	cout<<"Enter Date 2 : ";
	cin>>day2.date;
	cout<<"Enter Number 1 to add and 2 to Subtract = ";
	cin>>ac;
	if(ac==1)
	{
		nday=day1.date+day2.date;
		if(nday>30)
		nday-=30;
		nmonth++;
		nmonth=month1.month+month2.month;
		if(nmonth>12)
		nmonth-=12;
		nyear++;
		nyear=year1.year+year2.year;
	}
	else if(ac==2)
	{
		nday=day2.date-day1.date;
		nmonth=month2.month-month1.month;
		nyear=year2.year-year1.year;
		if(nday<0)
		{
			nyear-=1;
			nmonth-=1;
			nday-=30;
		}
		if(nmonth<0)
		{
			nyear-=1;
			nmonth+=12;
		}
	}
	cout<<"New Date"<<endl;
	cout<<nday<<"-"<<nmonth<<"-"<<nyear;
	return 0;
}

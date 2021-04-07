#include <iostream>
using namespace std;
struct complex{
	int real,imaginary;
};
int main() {
	complex num1,num2;
	int a;
	int numr,numi;
	cout<<"Enter Real Part of Number 1 : ";
	cin>>num1.real;
	cout<<"Enter Imaginary Part of Number 1 : ";
	cin>>num1.imaginary;
	cout<<"Enter Real Part of Number 2 : ";
	cin>>num2.real;
	cout<<"Enter Imaginary Part of Number 2 : ";
	cin>>num2.imaginary;
	cout<<"The Number 1 You Entered is"<<endl;
	if(num1.imaginary>0)
	cout<<num1.real<<"+"<<num1.imaginary<<"i"<<endl;
	else
	cout<<num1.real<<num1.imaginary<<"i"<<endl;
	cout<<"The Number 2 You Entered is"<<endl;
	if(num2.imaginary>0)
	cout<<num2.real<<"+"<<num2.imaginary<<"i"<<endl;
	else
	cout<<num2.real<<num2.imaginary<<"i"<<endl;
	cout<<"Enter Number for"<<endl;
	cout<<"1=Sum"<<endl;
	cout<<"2=Subtraction"<<endl;
	cout<<"3=Multiplication"<<endl;
	cout<<"4=Division"<<endl;
	cin>>a;
	if(a==1)
	{
		cout<<"Sum = ";
		numr=num1.real+num2.real;
		numi=num1.imaginary+num2.imaginary;
		if(numi>0)
		cout<<numr<<"+"<<numi<<"i"<<endl;
		else
		cout<<numr<<numi<<"i"<<endl;
	}
	if(a==2)
	{
		cout<<"Difference = ";
		numr=num1.real-num2.real;
		numi=num1.imaginary-num2.imaginary;
		if(numi>0)
		cout<<numr<<"+"<<numi<<"i"<<endl;
		else
		cout<<numr<<numi<<"i"<<endl;
	}
	if(a==3)
	{
		cout<<"Multiplication = ";
		int x,y,z,w;
		x=num1.real*num2.real;
		y=num1.real*num2.imaginary;
		z=num2.imaginary*num1.real;
		w=(num1.imaginary*num2.imaginary)*(-1);
		x=x+w;
		y=y+z;
		numr=x;
		numi=y;
		cout<<numr<<numi<<"i"<<endl;
	}
	if(a==4)
	{
		cout<<"Division = ";
		int x,y,z,w,f,g,h;
		x=num2.imaginary*(-1);
		y=num1.real*num2.real;
		z=num1.real*x;
		w=num1.imaginary*num2.real;
		f=num1.imaginary*x*(-1);
		y=y+f;
		z=z+w;
		int topreal=y;
		int topimaginary=z;
		g=num1.real*num1.real;
		h=num1.imaginary*num1.imaginary;
		int bottom=g+h;
		numr=topreal/bottom;
		numi=topimaginary/bottom;
		if(numi>0)
		cout<<numr<<"+"<<numi<<"i"<<endl;
		else
		cout<<numr<<numi<<"i"<<endl;
	}
	return 0;
}

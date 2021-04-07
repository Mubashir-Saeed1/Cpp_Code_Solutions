#include <iostream>
using namespace std;
int power(int a, int b)
{
	if(b==0)
	return 1;
	else
	return a*power(a,b-1);
}

int main() {
	int a,b;
	cout<<"Enter Number to Find its Power = ";
	cin>>a;
	cout<<"Enter Power = ";
	cin>>b;
	cout<<a<<"^"<<b<<"= ";
	int l=power(a,b);
	cout<<l;
	return 0;
}

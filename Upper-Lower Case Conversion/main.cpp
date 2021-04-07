#include <iostream>
#include <string.h>
using namespace std;
void ch(char a)
{
	a;
	if(a>=65 && a<=90)
        a=a+32;
    else if(a>=97 && a<=122)
        a=a-32;
    cout<<a;
	
}
int main(int argc, char** argv) {
	char a;
	cout<<"Enter any Character : ";
	cin>>a;
	ch(a);
	return 0;
}

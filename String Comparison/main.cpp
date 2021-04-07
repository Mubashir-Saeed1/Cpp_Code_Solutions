#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    bool flag;
    char a[100];
    cout<<"Enter First String  ";
    gets(a);
    cout<<"Enter Second Sting  ";
    char b[100];
    gets(b);
    for(int i=0;a[i]!=0;i++)
    {
    	if(a[i]==b[i])
    	flag=true;
    	else 
    	flag=false;
	}
	if(flag)
	cout<<"Yes";
	else
	cout<<"No";
    return 0;
}

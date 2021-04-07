#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void cat(char str[100],char str1[100])
{
	int a,b,j=0;
	str[100],str1[100];
	a=strlen(str);
	b=strlen(str)+strlen(str1);
	for(int i=a;i<=b;i++)
	{
		str[i]=str1[j];
		j++;
	}
	cout<<str;
}
int main(int argc, char** argv) {
	char str[100],str1[100];
	gets (str);
	gets (str1);
	cat(str,str1);
	return 0;
}

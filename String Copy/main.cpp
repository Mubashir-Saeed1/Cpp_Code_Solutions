#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void copy(char str[100],char str1[100])
{
	str[100],str1[100];
	for(int i=0;i<strlen(str);i++)
	{
		str1[i]=str[i];
	}
	for(int i=0;i<strlen(str1);i++)
	{
		cout<<str[i];
	}
}
int main(int argc, char** argv) {
	char str[100],str1[100];
	gets (str);
	copy(str,str1); 
	return 0;
}

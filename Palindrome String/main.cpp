#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char sr[10],temp[10];
    cout<<"Enter Characters: ";
    gets(sr);
    int a=strlen(sr);
    strcpy(temp,sr);
    for(int i=0,j=a-1; i<a/2; i++,j--)
    {
            char temp=sr[i];
            sr[i]=sr[j];
            sr[j]=temp;
    }
    bool flag=false;
    for(int i=0;sr[i]!='\0';i++)
    {
        if(sr[i]==temp[i])
            flag=true;
    }
    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}

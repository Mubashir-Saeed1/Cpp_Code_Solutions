#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str[40];
    cout<<"Enter any Sentence"<<endl;
    gets(str);
    int a=0,i;
    for(i=0; i<=strlen(str); i++)
    {
        if(str[i]==' ')
            a++;
    }
    cout<<"Total Numbers of Words = "<<a+1<<endl;
    cout<<"Total Numbers of Characters = "<<i+1;
    return 0;
}

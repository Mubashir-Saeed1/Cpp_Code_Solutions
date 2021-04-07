#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    char a[100];
    gets(a);
    char b[100];
    for(i=0;a[i]!=0; i++)
    {
        b[i]=a[i];
    }
        b[i]='\0';
    cout<<b;
    return 0;
}

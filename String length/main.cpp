#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    gets(a);
    int k=0;
    for(int i=0; a[i]!='\0'; i++)
        k++;
        cout<<k;
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char sen[100];
    cout<<"Enter a Sentence"<<endl;
    gets(sen);
    int w=0,c=0,s=0;
    for (int i=0;sen[i]!='\0'; i++)
    {
        if(sen[i]=='a' || sen[i]=='A' || sen[i]=='e' || sen[i]=='E' || sen[i]=='i' || sen[i]=='I' || sen[i]=='O' || sen[i]=='o' || sen[i]=='u' || sen[i]=='U')
            w++;
        else if(sen[i]==' ')
                s++;
        else
            c++;
    }
    cout<<"Number of Vowels = "<<w<<endl;
    cout<<"Number of Spaces = "<<s<<endl;
    cout<<"Number of Consonants = "<<c;
    return 0;
}

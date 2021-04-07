#include <iostream>

using namespace std;

int main()
{
    int x,y=1,a,ch=0;
    char z;
    float g,gpa,k=0.00;
    cout<<"Enter Number of Subjects = ";
    cin>>x;
    do
    {
        cout<<"Enter Grade of Subject "<<y<<" = ";
        cin>>z;
        cout<<"Enter Credit Hours of Subject "<<y<<" = ";
        cin>>a;
        ch=ch+a;
        if(z=='A')
        {
           g= 4.00*a;
        }
        else if(z=='B')
        {
            g=3.00*a;
        }
        else if(z=='C')
        {
            g=2.00*a;
        }
        else if(z=='D')
        {
            g=1.00*a;
        }
        else if(z=='F')
        {
            g=0.00*a;
        }
        k=k+g;
        y++;
    }
    while (y<=x);
    gpa=k/ch;
    cout<<"GPA = "<<gpa;
    return 0;
}

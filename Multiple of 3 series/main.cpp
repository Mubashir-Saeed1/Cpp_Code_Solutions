#include <iostream>

using namespace std;
int factorial(int);
int factorial(int t)
{
    int i=1;
   for(int x=1; x<=t; x++)
   {
       i=i*x;
   }
   return i;
}
int main()
{
    int a;
    cout<<"Enter a Number to find its Factorial = ";
    cin>>a;
    cout<<"\nFactorial = "<<factorial(a);

    return 0;
}

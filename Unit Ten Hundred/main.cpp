#include <iostream>

int main()
{
    int x,U,H,T;
    std::cout<<"Enter a Three Digit Number = ";
    std::cin>>x;
    U=x%10;
    T=(x/10)%10;
    H=x/100;
    std::cout<<"\nUnit = "<<U;
    std::cout<<"\nTens = "<<T;
    std::cout<<"\nHundreds =  "<<H;
    std::cout<<"\nCheck = "<<U+(T*10)+(H*10*10);
    return 0;
}

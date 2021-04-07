#include <iostream>

int main()
{
    int x=5;
    std::cout<<"Guess a number ";
    std::cin >>x;
    if (x>5)
    {
        std::cout<<"Try again with a LOWER Number";
        std::cin>>x;
    }
    if(x<5)
    {
        std::cout<<"Try again with a GREATER Number";
        std::cin>>x;
    }
        if (x>5)
    {
        std::cout<<"Try again with a LOWER Number";
        std::cin>>x;
    }
    if(x<5)
    {
        std::cout<<"Try again with a GREATER Number";
        std::cin>>x;
    }
    if(x==5){
        std::cout<<">>>>YOU WIN....!<<<<";
    }
    else
    {
        std::cout<<">>>>YOU LOSE....!<<<<";
    }
    return 0;
}

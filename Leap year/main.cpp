#include <iostream>

int main()
{
    int y;
    std::cout<<"Enter year: ";
    std::cin>>y;
    if (y%4==0)
    {
        if (y%100==0)
        {
            if(y%400==0)
            {
                std::cout<<"Leap year";
            }
            else{
                std::cout<<"Not a leap year";
            }
        }
        else
        {
          std::cout<<"Leap year";
        }
    }
    else
    {
        std::cout<<"Not a Leap year";
    }
    return 0;
}

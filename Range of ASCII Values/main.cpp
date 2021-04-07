#include <iostream>

int main()
{
    int x;
    std::cout<<"Enter any character: ";
    std::cin>>x;
    if (x<48)
    {
        std::cout<<"Character you entered is a Special Character";
    }
    else if(x<58)
    {
        std::cout<<"Character you entered is a Digit";
    }
    else if(x<64)
    {
        std::cout<<"Character you entered is a Special Character";
    }
    else if(x<91)
    {
        std::cout<<"Character you entered is a Capital Letter";
    }
    else if(x<97)
    {
        std::cout<<"Character you entered is a Special Character";
    }
    else if(x<124)
    {
        std::cout<<"Character you entered is a Small Letter";
    }
    else if(x<128)
    {
        std::cout<<"Character you entered is a Special Character";
    }
    else if(x>127)
    {
        std::cout<<"Invalid Entry!!!";
    }
    else if(x<0)
    {
        std::cout<<"Invalid Entry!!!";
    }
    return 0;
}

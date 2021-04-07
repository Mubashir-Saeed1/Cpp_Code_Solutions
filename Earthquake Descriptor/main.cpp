#include <iostream>

int main()
{
    float x;
    std::cout<<"Enter magnitude of Earthquake: ";
    std::cin>>x;
    if (x<2.0)
    {
        std::cout<<"Micro";
    }
    else if(x<4.0)
    {
        std::cout<<"Minor";
    }
    else if(x<5.0)
    {
        std::cout<<"Light";
    }
    else if(x<6.0)
    {
        std::cout<<"Moderate";
    }
    else if(x<8.0)
    {
        std::cout<<"Major";
    }
    else if(x<10.0)
    {
        std::cout<<"Great";
    }
    else{
        std::cout<<"Meteoric";
    }
    return 0;
}

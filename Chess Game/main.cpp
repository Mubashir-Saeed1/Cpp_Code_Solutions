#include <iostream>

int main()
{
    char l;
    char d;
    std::cout<<"Enter column Letter: ";
    std::cin>>l;
    std::cout<<"Enter row Digit: ";
    std::cin>>d;
    if (d%2==0)
    {
        if(l=='a' || l=='c' || l=='e' || l=='g')
     std::cout<<"white";
     else if(l=='b' || l=='d' || l=='f' || l=='h')
        std::cout<<"black";
    }
    else if (d%2!=0) {
            if(l=='a' || l=='c' || l=='e' || l=='g')
     std::cout<<"black";
     else if(l=='b' || l=='d' || l=='f' || l=='h')
        std::cout<<"white";
    }
    else
        std::cout<<"invalid entry";
    return 0;
}

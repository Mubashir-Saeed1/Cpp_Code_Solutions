#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y=0;
    cout << "1st Variable before Swaping = "<<x<<endl;
    cout << "2nd Variable Before Swaping = "<<y<<endl;
    y=x^y;
    x=x^y;
    cout << "1st Variable after Swaping = "<<x<<endl;
    cout << "2nd Variable after Swaping = "<<y<<endl;

    return 0;
}

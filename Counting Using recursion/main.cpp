#include <iostream>

using namespace std;
void counts(int a)
{
	cout<<a<<endl;
	if(a<100)
	counts(a+1);
}
int main()
{
    int a=0;
    counts(a);
    return 0;
}

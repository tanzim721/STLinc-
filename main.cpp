#include<iostream>
#include<conio.h>
using namespace std;
template <class myTemplate1,class myTemplate2>
myTemplate1 add(myTemplate1 a,myTemplate2 b)
{
    return a+b;
}

int main()
{
    cout<<add(10.40,30.89)<<endl;
    return 0;
}

#include <iostream>
using namespace std;


int sum(int a,int b)
{
    int c;
    a=10;
    b=11;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(a,b);
    cout<<a<<b<<endl;
    cout<<c;
    return 0;
}

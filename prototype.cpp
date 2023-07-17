#include <iostream>
using namespace std;
int sum(int a, int b);//declaring function but body is not defined yet


int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<c;
    return 0;
}
int sum(int a,int b)
{
    return a+b;
    
}

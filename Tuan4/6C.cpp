#include <iostream>
using namespace std;
int GCD(int ,int);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}
int GCD(int a,int b)
{
    while (a!=b)
        if (a>b)
            a-=b;
        else
            b-=a;
    return a;
}

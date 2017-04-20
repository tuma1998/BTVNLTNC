#include <iostream>
using namespace std;
int PrimeNumber(int);
int main()
{
    int n;
    cin>>n;
    cout<<PrimeNumber(n);
    return 0;
}
int PrimeNumber(int n)
{
    int i,j=0;
    if (n>=2)
    {
        for (i=1;i<=n;i++)
        {
            if (n%i==0)
            j++;
        }
        if (j==2)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int x[100];
bool c[100];
int n,k,t;
void input();
bool checkarray();
int sumarray();
void printstring();
void trying(int );
int main()
{
    input();
    for (k=1;k<=n;k++)
        trying(1);
    return 0;
}
void input()
{
    cin>>n;
}
bool checkarray()
{
    if (k>1)
    {
        for (int i=1;i<=k-1;i++)
            if (x[i]<x[i+1])
                return false;
    }
}
int sumarray()
{
    int sum=0;
    for (int i=1;i<=k;i++)
        sum+=x[i];
    return sum;
}
void printstring()
{
    int i;
    if (sumarray()==n && checkarray())
    {
        for (i=1;i<=k;i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
}
void trying(int i)
{
    int j;
    memset(c,true,sizeof(c));
    for (j=n;j>=1;j--)
        if (c[j])
        {
            x[i]=j;
            if (i==k)
                printstring();
            else
            {
                c[j]=false;
                trying(i+1);
                c[j]=true;
            }
        }
}

#include <iostream>
using namespace std;
void paint(int ,int);
int main()
{
    int n;
    int i;
    cin>>n;
    for (i=0;i<n;i++)
    {
        paint(n-i,2*i+1);
        cout<<endl;
    }
    return 0;
}
void paint(int M,int N)
{
    int i;
    for (i=0;i<M;i++)
        cout<<' ';
    for (i=0;i<N;i++)
        cout<<'*';
}

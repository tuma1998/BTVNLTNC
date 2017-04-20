#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int randomarray(int *,int);
void check(int *,int);
int main()
{
    int a[100],n;
    cin>>n;
    randomarray(a,n);
    check(a,n);
    return 0;
}
int randomarray(int *a,int n)
{
    int maximum=49;
    int i;
    for (i=0;i<n;i++)
        *(a+i)=rand()%maximum;
}
void check(int *a,int n)
{
    int i,j,k;
    for (i=0;i<n-2;i++)
        for (j=i+1;j<n-1;j++)
            for (k=j+1;k<n;k++)
                if ((*(a+i)+*(a+j)+*(a+k))%25==0)
                    cout<<*(a+i)<<" "<<*(a+j)<<" "<<*(a+k)<<endl;
}

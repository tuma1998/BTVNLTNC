#include <iostream>
using namespace std;
void input(int *,int *);
int check(int *,int ,int );
int countnumber(int *,int ,int);
int main()
{
    int a[100],n,i;
    input(a,&n);
    cout<<endl;
    cout<<a[0]<<": "<<countnumber(a,n,0)<<endl;
    for (i=1;i<n;i++)
        if (check(a,n,i)==1)
            cout<<a[i]<<": "<<countnumber(a,n,i)<<endl;
    return 0;
}
void input(int *a,int *n)
{
    int i;
    cin>>*n;
    for (i=0;i<*n;i++)
        cin>>*(a+i);
}
int check(int *a,int n,int i)
{
    int j;
    for (j=0;j<i;j++)
        if (*(a+j)==*(a+i))
            return 0;
    return 1;
}
int countnumber(int *a,int n,int i)
{
    int count=0,j=0,t=*(a+i);
    for (j=i;j<n;j++)
        if (*(a+j)==t)
            count++;
    return count;
}

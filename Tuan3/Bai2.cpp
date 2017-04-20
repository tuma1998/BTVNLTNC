#include <iostream>
using namespace std;
void input(int *,int *);
int max(int *,int );
int min(int *,int);
int sumevennumber(int *,int);
int countoddnumber(int *,int);
int main()
{
    int a[100],n,i;
    input(a,&n);
    cout<<"Min: "<<min(a,n)<<endl;
    cout<<"Max: "<<max(a,n)<<endl;
    cout<<"Sum of even number: "<<sumevennumber(a,n)<<endl;
    cout<<"Odd number are: "<<countoddnumber(a,n)<<endl;
    return 0;
}
void input(int *a,int *n)
{
    int i;
    cin>>*n;
    for (i=0;i<*n;i++)
        cin>>*(a+i);
}
int max(int *a,int n)
{
    int max=*a,i;
    for (i=1;i<n;i++)
        if (*(a+i)>max)
            max=*(a+i);
    return max;
}
int min(int *a,int n)
{
    int min=*a,i;
    for (i=1;i<n;i++)
        if (*(a+i)<min)
            min=*(a+i);
    return min;
}
int sumevennumber(int *a,int n)
{
    int sum=0,i;
    for (i=0;i<n;i++)
        if (*(a+i)%2==0)
            sum+=*(a+i);
    return sum;
}
int countoddnumber(int *a,int n)
{
    int count=0,i;
    for (i=0;i<n;i++)
        if (*(a+i)%2!=0)
            count++;
    return count;
}

#include <iostream>

using namespace std;

void input(int *,int *);
float trungbinh(int *,int);
float phuongsai(int *,int);


int main()
{
    int a[100],n,i;
    input(a,&n);
    cout<<"Average: "<<trungbinh(a,n)<<endl;
    cout<<"Variance: "<<phuongsai(a,n)<<endl;
    return 0;
}

void input(int *a,int *n)
{
    int i;
    cin>>*n;
    for (i=0;i<*n;i++)
        cin>>*(a+i);
}

float trungbinh(int *a,int n)
{
    int i=0,sum=0;
    float average;
    for (i=0;i<n;i++)
        sum+=*(a+i);
    return float(sum)/n;
}

float phuongsai(int *a,int n)
{
    float AVR=trungbinh(a,n);
    int i;
    float phuongsai,sum=0;
    for (i=0;i<n;i++)
        sum+=(*(a+i)-AVR)*(*(a+i)-AVR);
    phuongsai=sum/n;
    return phuongsai;
}

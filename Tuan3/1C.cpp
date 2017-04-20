#include <iostream>
using namespace std;
void input(int *,int *);
string check(int *,int);
int main()
{
	int a[10000],n;
	input(a,&n);
	cout<<check(a,n)<<endl;
	return 0;
}
void input(int *a,int *n)
{
	int i;
	cin>>*n;
	for (i=0;i<*n;i++)
		cin>>*(a+i);
}
string check(int *a,int n)
{
	int i,j;
	bool OK=false;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if (*(a+i)==*(a+j))
				{
					OK=true;
				}
		if (OK==true)
			return "Yes";
		else
			return "No";
}

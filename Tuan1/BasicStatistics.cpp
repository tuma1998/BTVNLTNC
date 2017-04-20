#include <iostream>
using namespace std;
int main() 
{
	int i,n,a[100],max,min,s=0;
	float mean;
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
	cout<<"Mean: "<<(float)s/n<<endl;
	max=a[0];
	for (i=1;i<n;i++)
		if (a[i]>max)
			max=a[i];
	cout<<"Max: "<<max<<endl;
	min=a[0];
	for (i=1;i<n;i++)
		if (a[i]<min)
			min=a[i];
	cout<<"Min: "<<min<<endl;
	return 0;
}

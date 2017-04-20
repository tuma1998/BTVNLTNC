#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	if (n<0)
		cout<<"Error\n";
	else if (n==0)
		cout<<0<<endl;
	else
	{
		for (i=1;i<=100;i++)
			if (i%2==0)
				cout<<i<<endl;
	}
	return 0;
}

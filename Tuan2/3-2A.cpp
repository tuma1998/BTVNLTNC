#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	if (k<0)
		cout<<"Error"<<endl;
	else if (k==0)
		cout<<0<<endl;
	else
		{
			do
				{
					k/=3;
				} while (k>=3);
			cout<<k<<endl;
		}
	return 0;
}

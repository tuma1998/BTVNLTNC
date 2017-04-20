#include <iostream>
using namespace std;
int main() 
{
	string f0="a",f1="b";
	string f;
	int i;
	cout<<f0<<endl;
	cout<<f1<<endl;
	for (i=1;i<10;i++)
		{
			f=f1+f0;
			f0=f1;
			f1=f;
			cout<<f<<endl;
		}
	return 0;
}

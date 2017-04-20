#include <iostream>
using namespace std;

int main() {
	int i,j=0;
	for (i=1;i<=100;i++)
		if (i%2==0)
			cout<<i<<endl;
	do
	{
		if (j%2==0)
			cout<<j<<endl;
		j++;
	} while (j<=100);
	j=0;
	while (j<=100)
	{
		if (j%2==0)
			cout<<j<<endl;
		j++;
	}

	return 0;
}

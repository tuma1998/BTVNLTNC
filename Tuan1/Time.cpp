#include <iostream>
using namespace std;

int main() {
	int i;
	for (i=0;i<=23;i++)
		{
			if (i==0)
				cout<<i+12<<" midnight"<<endl;
			else
				{
					if (i==12)
						cout<<i<<" noon"<<endl;
					else if (i>12)
						cout<<i-12<<"pm"<<endl;
					else
						cout<<i<<"am"<<endl;
				}

		}
	return 0;
}

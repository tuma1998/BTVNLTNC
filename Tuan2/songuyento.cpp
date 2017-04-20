#include<iostream>
using namespace std;
int main()
{
	int i,z;
	cout << " Nhap so ban muon kiem tra :" << endl;
	cin >> i;
	int a=0;
	for (z=2;z<i;z++)
	{
		if (i%z==0) a++;
	}
	if (a==0) cout << "True";
	else cout << "False";
}

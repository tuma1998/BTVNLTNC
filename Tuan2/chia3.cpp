#include<iostream>
using namespace std;
int main()
{
	int k;
	cout << " Nhap so ban muon thu nghiem :" << endl;
	cin >>k;
	if (-3<k&&k<3||k%3!=0) cout << " Ket qua la :" << k;
	else
	{
	do
	{
		k=k/3;
	}while(k>=3&&k%3==0||k<=-3&&k%3==0);
	cout << " Ket qua la :" << k;
	}
}

//xet thu tu cua 3 so 
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	bool b;
	cout <<"Nhap ba so can kiem tra :" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if(x<y&&y<z||x>y&&y>z) b=true;
	else b=false;
	cout << b;
}

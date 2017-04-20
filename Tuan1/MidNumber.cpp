//tim so dung giua
#include <iostream>
using namespace std;
void readData(float [],int *);
void sortData(float [],int);
int main() 
{
	float a[100];
    int n;
    readData(a,&n);
    sortData(a,n);
}
void readData(float x[],int *y)
{
    cout <<"Nhap so phan tu cua day: ";
    cin >> *y;
    int i;
    for (i=0;i<*y;i++)
    {
        cin >>x[i];
    }
}
void sortData(float x[],int y)
{
    float c;
    int i,j;
    for (i=0;i<y-1;i++)
        for (j=i+1;j<y;j++)
            if (x[i]>x[j])
            {
                c=x[i];
                x[i]=x[j];
                x[j]=c;
            }
    cout << "So o giua la "<<x[2];
    
}

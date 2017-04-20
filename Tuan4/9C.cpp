#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int randomnumber(int );
int main()
{
    srand(time(0));
    int n;
    cin>>n;
    cout<<randomnumber(n)<<endl;
    return 0;
}
int randomnumber(int n)
{
    return rand()%n;
}

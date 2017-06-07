#include <iostream>
using namespace std;
class Fraction
{
public:
    float numberator;
    float denominator;
    Fraction (const float a=0, const float b=0)
    {
        numberator=a;
        denominator=b;
    }
    void print(Fraction m)
    {
        cout<<m.numberator<<"/"<<m.denominator<<endl;
    }
};
int main()
{
    Fraction m(4,10);
    m.print(m);
    return 0;
}

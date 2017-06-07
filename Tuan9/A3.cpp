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
    friend Fraction operator + (Fraction F1,Fraction F2);
    friend Fraction operator - (Fraction F1,Fraction F2);
    friend Fraction operator * (Fraction F1,Fraction F2);
};

Fraction operator + (Fraction F1,Fraction F2)
{
    Fraction m;
    m.numberator=F1.numberator*F2.denominator+F2.numberator*F1.denominator;
    m.denominator=F1.denominator*F2.denominator;
    return m;
}

Fraction operator - (Fraction F1,Fraction F2)
{
    Fraction m;
    m.numberator=F1.numberator*F2.denominator-F2.numberator*F1.denominator;
    m.denominator=F1.denominator*F2.denominator;
    return m;
}

Fraction operator * (Fraction F1,Fraction F2)
{
    Fraction m;
    m.numberator=F1.numberator*F2.numberator;
    m.denominator=F1.denominator*F2.denominator;
    return m;
}
int main()
{
    Fraction m(4,10);
    Fraction n(5,6);
    Fraction k=n+m;
    cout<<"k=m+n => k= ";k.print(k);
    k=m-n;
    cout<<"k=m-n => k= ";k.print(k);
    k=m*n;
    cout<<"k=m*n => k= ";k.print(k);
    return 0;
}


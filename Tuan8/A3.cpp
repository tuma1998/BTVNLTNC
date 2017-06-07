#include <iostream>
using namespace std;
struct Point
{
    float x;
    float y;
    Point (float a=0.0,float b=0.0)
    {
        x=a;
        y=b;
    }
    Point mid_point(Point a,Point b) const
    {
        Point m;
        m.x=(a.x+b.x)/2;
        m.y=(a.y+b.y)/2;
        return m;
    }
    void print(Point a)
    {
        cout<<"("<<a.x<<","<<a.y<<")"<<endl;
    }
};

int main()
{
    Point diem1(4,5),diem2(5,6);
    Point diemgiua;
    diemgiua=diemgiua.mid_point(diem1,diem2);
    diemgiua.print(diemgiua);
    return 0;
}

#include <iostream>
using namespace std;
struct Point
{
    float x;
    float y;
    Point (float a, float b)
    {
        x=a;
        y=b;
    }
    void print(Point a)
    {
        cout<<"("<<a.x<<","<<a.y<<")"<<endl;
    }
};
int main()
{
    Point diem(4,5);
    diem.print(diem);
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void randomdice(int*);
void playgame(int,int,int);

int main()
{
    int pointA=0;
    int pointB=0;
    int dice;
    srand(time(0));
    playgame(pointA,pointB,dice);
    return 0;
}

void randomdice(int *dice)
{
    *dice=rand()%6+1;
}

void playgame(int pointA,int pointB,int dice)
{
    int i=0;
    do
    {
        cout<<"Turn A: ";
        randomdice(&dice);
        pointA+=dice;
        cout<<dice<<"\t"<<"Score: "<<pointA<<endl;
        if (pointA==100)
        {
            cout<<"The winner is A"<<endl;
            break;
        }
        cout<<"Turn B: ";
        randomdice(&dice);
        pointB+=dice;
        cout<<dice<<"\t"<<"Score: "<<pointB<<endl;
        if (pointB==100)
        {
            cout<<"The winner is B"<<endl;
            break;
        }
        i++;
    } while (pointA<100 || pointB<100);
}

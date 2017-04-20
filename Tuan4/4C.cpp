#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string.h>

using namespace std;

const string wordlist[]={"bear"
                        ,"cat"
                        ,"dog"
                        ,"dragon"
                        ,"fish"
                        ,"lion"
                        ,"elephant"
                        ,"chicken"
                        ,"bird"
                        ,"ant"
                        ,"bee"
                        ,"buffalo"
                        ,"duck"
                        ,"horse"
                        ,"monkey"
                        ,"mouse"
                        ,"tiger"
                        ,"wolf"
                        };
const string lose[]={
"_______________________\n"
" |                 +   \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                 |   \n"
" |                      \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                /|   \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                /|\\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                /|\\ \n"
" |                /    \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 O   \n"
" |                /|\\ \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                /    \n"
" |               O     \n"
" |              /|\\   \n"
" |              / \\   \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                 +   \n"
" |                 |   \n"
" |                 O   \n"
" |                /|\\ \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________ \n"
" |                 +    \n"
" |                  \\  \n"
" |                   O  \n"
" |                  /|\\\n"
" |                  / \\\n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n"

};
const string win[]={
"_______________________\n"
" |                 O   \n"
" |                /|\\ \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                O   \n"
" |                _|_ \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                  O  \n"
" |                _|_  \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n",
"_______________________\n"
" |                \\O/  \n"
" |                 |   \n"
" |                / \\ \n"
" |                     \n"
" |                     \n"
" |                     \n"
"-'---------------------\n"
"-----------------------\n"

};

void chooseword(string *,int *);
void secretword(string,int, char *);
void input(char *);
int check(string,int,char);
void update(string,int,char *,char);
int compare(string ,int, char *);
void losegame();
void wingame();

int main()
{
    srand(time(0));
    string a,d="";
    char c,b[20];
    int n,i,fault=0,turnmax=6;
    cout<<lose[fault];
    chooseword(&a,&n);
    secretword(a,n,b);
    do
    {

        input(&c);
        if (check(a,n,c))
        {
            update(a,n,b,c);
        }
        else
            {
                fault++;
                d+=c;
            }

        if (compare(a,n,b))
        {
            cout<<"The word is "<<a<<endl;
            Sleep(5000);
            wingame();
            break;
        }
        if (fault==turnmax)
            {
                cout<<"YOU LOSE. The word is "<<a<<endl;
                Sleep(5000);
                losegame();
                break;
            }
        system("cls");
        cout<<lose[fault];
        cout<<"Secret word is ";
        for (i=0;i<n;i++)
                cout<<b[i];
        cout<<endl;
        cout<<"FALSE: "<<fault<<endl;
        cout<<"Character fasle: "<<d<<endl;

    } while (fault<turnmax && compare(a,n,b)==0);
    return 0;
}

void chooseword(string *a,int *n)
{
    int size=sizeof(wordlist)/sizeof(string);
    int index=rand()% size;
    *a=wordlist[index];
    *n=(*a).length();
}

void input(char *c)
{
    cout<<"Enter your letter: ";
    cin>>*c;
}

int check(string a, int n, char c)
{
    int i;
    for (i=0;i<n;i++)
        if (a[i]==c)
        {
            return 1;
        }
    return 0;
}

void secretword(string a,int n,char *b)
{
    int i;
    cout<<"Secret word is ";
    for (i=0;i<n;i++)
        b[i]='*';
    for (i=0;i<n;i++)
        cout<<b[i];
    cout<<endl;

}

void update(string a,int n,char *b,char c)
{
    int i;
    for (i=0;i<n;i++)
        if (a[i]==c)
        {
            b[i]=c;
        }
}

int compare(string a,int n, char *b)
{
    int i;
    for (i=0;i<n;i++)
        if (a[i]!=b[i])
            return 0;
   return 1;
}

void losegame()
{
    int turn=0;
    do
    {
        cout<<lose[8];
        Sleep(100);
        system("cls");
        cout<<lose[7];
        Sleep(100);
        system("cls");
        cout<<lose[8];
        Sleep(100);
        system("cls");
        cout<<lose[9];
        Sleep(100);
        system("cls");
        turn++;
    } while (turn<5);
}

void wingame()
{
    int turn=0;
    do
    {
        cout<<win[0]<<endl;
        Sleep(500);
        system("cls");
        cout<<win[1]<<endl;
        Sleep(500);
        system("cls");
        cout<<win[2]<<endl;
        Sleep(500);
        system("cls");
        cout<<win[3]<<endl;
        Sleep(500);
        system("cls");
        turn++;
    } while (turn<5);
}

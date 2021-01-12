#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get();
cin.get();
srand(time(0));
int a=rand()%9;
cout << "You will get ";
    if (a==0)
        {
            cout<<"A";
        }
    else if (a==1)
    {
        cout<<"B+";
    }
    else if (a==2)
    {
        cout<<"B";
    }
    else if (a==3)
    {
        cout<<"C+";
    }
    else if (a==4)
    {
        cout<<"C";
    }
    else if (a==5)
    {
        cout<<"D+";
    }else if (a==6)
    {
        cout<<"D";
    }else if (a==7)
    {
        cout<<"F";
    }else
    {
        cout<<"W";
    }
cout << " in this 261102.";

    return 0;
}

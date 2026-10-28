#include <iostream>
using namespace std;

int main() {
    int X;
    int Y;
    cin >> X >> Y;
    if(X==0 and Y==0)
    {
        cout << "Origin";
    }
    else if(X!=0 and Y==0)
    {
        cout << "X axis";
    }
    else if(X==0 and Y!=0)
    {
        cout << "Y axis";
    }
    else if(X>0 and Y>0)
    {
        cout << "1st Quadrant";
    }
    else if(X<0 and Y>0)
    {
        cout << "2nd Quadrant";
    }
    else if(X<0 and Y<0)
    {
        cout << "3rd Quadrant";
    }
    else
    {
        cout << "4th Quadrant";
    }
}
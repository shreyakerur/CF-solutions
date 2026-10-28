#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    int Y;
    cin >> X >> Y;
    if(X<Y)
    {
        cout << "Min = " << X << endl;
        cout << "Max = " << Y << endl;
    }
    else
    {
        cout << "Min = " << Y << endl;
        cout << "Max = " << X << endl;
    }
}
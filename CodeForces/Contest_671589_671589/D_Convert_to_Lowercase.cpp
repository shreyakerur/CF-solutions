#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if(ch>='A' and ch<='Z')
    {
        ch += 32;
    }
    cout << ch;
}


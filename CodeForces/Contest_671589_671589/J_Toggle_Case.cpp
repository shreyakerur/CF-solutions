#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            s[i] -= 32;
        }
        else
        {
            s[i] += 32;
        }
    }
    cout << s << endl;
    
}


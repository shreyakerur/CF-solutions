#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    
    char x;
    cin >> x;

    string result = "";
    for(int i=0;i<n;i++)
    {
        if(s[i]!=x)
        {
            result += s[i];
        }
    }
    cout << result << endl;
    
}


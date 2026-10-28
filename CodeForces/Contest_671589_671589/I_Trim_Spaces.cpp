#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int n = s.length();
    
    string result = "";
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
        {
            result += s[i];
        }
    }
    cout << result << endl;
    
}


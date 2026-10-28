#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    if(n!=10)
    {
        cout << "Weak";
        return 0;
    }
    
    bool hasLower = false, hasUpper = false;
    bool hasDigit = false, hasSymbol = false;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            hasLower = true;
        }
        else if(s[i]>='A' and s[i]<='Z')
        {
            hasUpper = true;
        }
        else if(s[i]>='0' and s[i]<='9')
        {
            hasDigit = true;
        }
        else
        {
            hasSymbol = true;
        }
    }
    
    if(hasLower and hasUpper and hasDigit and hasSymbol)
    {
        cout << "Strong";
    }
    
    else
    {
        cout << "Weak";
    }
    
}


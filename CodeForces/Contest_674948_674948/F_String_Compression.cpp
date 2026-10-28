#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        int n=s.size();
        int i=0;
        while(i<n)
        {
            int j=i, count=0;
            while(j<n and s[i]==s[j])
            {
                count++;
                j++;
            }
            
            cout << s[i];
            if(count>1)
            {
                cout << count;
            }
            i=j;
        }
        cout << endl;
        
    }

}

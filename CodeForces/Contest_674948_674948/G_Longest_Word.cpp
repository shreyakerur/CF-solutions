#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin,S);
    
    int n=S.length();
    int i=0, ans=0;
    
    while(i<n)
    {
        int j=i, count=0;
        if(S[i]==' ')
        {
            i++;
            continue;
        }
        while(j<n and S[j]!=' ') //j pointer is moving, always check moving pointer
        {
            count++;
            j++;
        }
        
        if(count>ans)
        {
            ans=count;
        }
        i=j;
    }
    cout << ans << endl;
    
}


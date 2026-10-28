#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long search;
    cin >> n >> search;
    long long a[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    bool flag = false;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

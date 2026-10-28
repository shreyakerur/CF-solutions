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
    
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            count++;
        }
    }
    cout << count;
}

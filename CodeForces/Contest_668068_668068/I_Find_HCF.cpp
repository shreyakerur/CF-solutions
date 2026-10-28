#include <bits/stdc++.h>
using namespace std;

void hcf(int n, int m)
{
    int ans = 0;
    int i=1;
    while(i<=n)
    {
        if(n%i==0 and m%i==0)
        {
            ans = i;
        }
        i++;
    }    
    cout << ans;
}

int main() {
    int n;
    int m;
    cin >> n >> m;

    hcf(n,m);
}

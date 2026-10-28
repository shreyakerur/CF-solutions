#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool flag = false;
    int i=1;
    while(i<=n)
    {
        if(n%i==0 and (i%10==2 or i%10==7))
        {
            flag = true;
            cout << i << ' ';
        }
        i++;
    }
    
    if(flag==false)
    {
        cout << -1;
    }
	
}

#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int count = 0;
        
        for(int j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                count++;
            }
        }
        
        if(count==1)
        {
            cout << a[i];
            return;
        }
    }
}

int main() {
	int t;
	cin >> t;
	
	for(int i=1;i<=t;i++)
	{
	    int n;
        cin >> n;
	    solve(n);
	    cout << endl;
	}

}

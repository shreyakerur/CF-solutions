#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	
	int count = 0;
	for(int i=0;i<n;i++)
	{
	    if(a[i]==a[i+1])
	    {
	        count++;
	    }
	}
	
	if(count==n-1)
	{
	    cout << "YES";
	}
	else
	{
	    cout << "NO";
	}
	
}

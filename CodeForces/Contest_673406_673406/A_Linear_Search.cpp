#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin >> A[i];
	}
	int X;
	cin >> X;
	
	bool flag = false;
	
	for(int i=0;i<n;i++)
	{
	    if(A[i]==X)
	    {
	        flag = true;
	        break;
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

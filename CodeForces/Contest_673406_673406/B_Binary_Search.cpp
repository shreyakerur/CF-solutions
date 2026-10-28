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
	int l=0;
	int r=n-1;
	int mid = 0;
	while(l<=r)
	{
	    mid = (l+r)/2;
	    if(A[mid]==X)
	    {
	        flag = true;
	        break;
	    }
	    else if(A[mid]>X)
	    {
	        r=mid-1; //left-side
	    }
	    else
	    {
	        l=mid+1; //right-side
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

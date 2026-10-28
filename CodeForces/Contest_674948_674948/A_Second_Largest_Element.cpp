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
	int second_max = -1;
	int maxi = a[0];
	for(int i=1;i<n;i++)
	{
	    if(a[i]>maxi)
	    {
	        maxi = a[i]; //maxi = 44
	    }
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]<maxi and a[i]>second_max) 
	    {
	        second_max = a[i]; //second_max = 31
	    }
	}
	if(second_max==-1)
	{
	    cout << -1;
	}
	else
	{
	    cout << second_max;
	}

}

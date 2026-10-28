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
	
	int minimum = a[0]; //12
	int location_1 = 1; 
	
	for(int i=1;i<n;i++)
	{

	    if(a[i]<minimum)
	    {
	        minimum = a[i];
	        location_1 = i+1;
	    }
	    else if(a[i]==minimum)
	    {
	        location_1 = i+1;
	    }
	}
	cout << location_1;
}

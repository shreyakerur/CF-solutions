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
	int passing_marks;
	cin >> passing_marks;
	
	int X=0; //counter
	int Y=0; //counter
	for(int i=0;i<n;i++)
	{
	    if(a[i]>=passing_marks)
	    {
	        X++;
	    }
	    else
	    {
	        Y++;
	    }
	}
	cout << "Pass: " << X << endl;
	cout << "Fail: " << Y << endl;

}

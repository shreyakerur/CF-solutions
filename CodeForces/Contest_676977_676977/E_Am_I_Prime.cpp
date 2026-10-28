#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N;
	cin >> N;
	
	if(N<=1)
	{
	    cout << "NO";
	    return 0;
	}//
	
	bool flag = true;
	
	for(long long i=2;i*i<=N;i++)
	{
	    if(N%i==0)
	    {
	        flag = false;
	        break; //
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

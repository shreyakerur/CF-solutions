#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int count_a=0, count_b=0;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i]=='a')
	    {
	        count_a++;
	    }
	    else
	    {
	        count_b++;
	    }
	}
	if(count_a==count_b)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	

}

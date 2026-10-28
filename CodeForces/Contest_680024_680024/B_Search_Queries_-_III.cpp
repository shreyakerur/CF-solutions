#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin>>N>>Q;
	
	unordered_map<long long,int> mp;
	for(int i=0;i<N;i++)
	{
	    long long p;
	    cin>>p;
	    mp[p]=i+1;
	}
	
	while(Q--)
	{
	    long long x;
	    cin>>x;
	    auto it=mp.find(x);
	    
	    if(it!=mp.end())
	    {
	        cout<<it->second<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}

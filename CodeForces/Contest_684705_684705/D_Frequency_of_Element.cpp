#include <bits/stdc++.h>
using namespace std;

int main() {
    //input N, Q
	int N, Q;
	cin >> N >> Q;
	long long A[N];
	for(int i=0;i<N;i++)
	{
	    cin >> A[i];
	}
	
	//build frequency map
	unordered_map<int,int> mp;
	for(int i=0;i<N;i++)
	{
	    mp[A[i]]++;
	}
	
	//process Q queries
	while(Q--)
	{
	    long long x;
	    cin >> x;
	    cout << mp[x] << endl;
	}
}

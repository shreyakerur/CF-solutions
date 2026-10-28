#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	string S;
	cin>>S;
	
	unordered_map<char,int> freq;
	int ans=0;
	int L=0;
	for(int R=0;R<N;R++)
	{
	    freq[S[R]]++;
	    
	    while(freq[S[R]]>1)
	    {
	        freq[S[L]]--;
	        if(freq[S[L]]==0)
	        {
	            freq.erase(S[L]);
	        }
	        L++;
	    }
	    ans=max(ans,R-L+1);
	}
	cout << ans;
}

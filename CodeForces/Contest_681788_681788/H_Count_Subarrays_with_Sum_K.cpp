#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	long long K;
	cin >> N >> K;
	vector<long long> A(N);
	for(int i=0;i<N;i++)
	{
	    cin >> A[i];
	}
	
	long long sum=0, ans=0;
	
	int L=0;
	for(int R=0;R<N;R++)
	{
	    //include R in the window
	    sum+=A[R];
	    while(sum>=K)
	    {
	        //exclude L and shrink the window
	        sum-=A[L];
	        L++;
	    }
	    ans+= R-L+1;
	}
	cout << ans;

}

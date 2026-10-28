#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	long long A[N];
	for(int i=0;i<N;i++)
	{
	    cin>>A[i];
	}
	
	sort(A,A+N);
	
	while(Q--)
	{
	    long long x;
	    cin>>x;
	    
	    int ans=N, L=0, R=N-1;
	    while(L<=R)
	    {
	        int mid=(L+R)/2;
	        if(A[mid]>=x)
	        {
	            ans=mid;
	            R=mid-1;
	        }

	        else
	        {
	            L=mid+1;
	        }
	    }
	    cout << N-ans << endl;
	}

}

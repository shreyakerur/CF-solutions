#include <bits/stdc++.h>
using namespace std;

int search_query(long long A[],long long N,long long x)
{
    int l=0, r=N-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(A[mid]==x)
        {
            return mid+1;
        }
        else if(A[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}
int main() {
	long long N, Q;
	cin >> N >> Q;
	long long A[N];
	for(int i=0;i<N;i++)
	{
	    cin >> A[i];
	}

	while(Q--)
	{
	    long long x;
	    cin >> x;
	    
	    cout << search_query(A, N, x)<<endl;
	}
	return 0;
}

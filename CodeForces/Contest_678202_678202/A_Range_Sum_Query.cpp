#include <bits/stdc++.h>
using namespace std;

int main() {
    //input array
	int N;
	cin>>N;
	long long a[N];
	for(int i=0;i<N;i++)
	{
	    cin >> a[i];
	}
	
	//building prefix sum array
	long long P[N], sum=0;
	
	for(int i=0;i<N;i++)
	{
	    sum+=a[i];
	    P[i]=sum;
	}
	
	//input L,R and output block
	int Q;
	cin>>Q;
	while(Q--)
	{
	    int L, R;
	    cin >> L >> R;
	    L--; //imp : for conversion from 1-based to 0-based indexing
	    R--; //imp : for conversion from 1-based to 0-based indexing
	    if(L==0)
	    {
	        cout << P[R];
	    }
	    else
	    {
	        cout << P[R]-P[L-1];
	    }
	    cout << endl;
	}
}

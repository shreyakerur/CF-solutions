#include <bits/stdc++.h>
using namespace std;

int main() {
	//N,Q,K - input
	int N;
	cin >> N;
	int Q;
	cin >> Q;
	int K;
	cin >> K;
	long long a[N];
	for(int i=0;i<N;i++)
	{
	    cin >> a[i];
	}
	
	long long P[N];
	int count=0;
	for(int i=0;i<N;i++)
	{
	    long long temp=a[i];
	    long long sum=0;
	    while(temp>0)
	    {
	        sum+=temp%10;
	        temp/=10;
	    }
	    if(sum==K)
	    {
	        count++;
	    }
	    P[i] = count;
	    //cout << P[i] << ' '; for visualization
	}
	//cout << endl;
	
	while(Q--)
	{
	    int L,R;
	    cin >> L >> R;
	    L--;
	    R--;
	    if(L==0)
	    {
	        cout << P[R];
	    }
	    else
	    {
	        cout << P[R] - P[L-1];
	    }
	    cout << endl;
	}

}

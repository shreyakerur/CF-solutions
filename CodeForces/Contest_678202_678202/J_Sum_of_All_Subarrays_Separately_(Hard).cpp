#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	long long a[N];
	for(int i=0;i<N;i++)
	{
	    cin >> a[i];
	}
	
	for(int L=0;L<N;L++)
	{
	    long long sum = 0;
	    for(int R=L;R<N;R++)
	    {
	        sum+=a[R];
	        cout << sum << '\n';
	    }
	    //print inside loop 
	}

}

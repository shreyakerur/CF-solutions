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
	
	long long ans = 0;
	for(int L=0;L<N;L++)
	{
	    for(int R=L;R<N;R++)
	    {
	        long long sum = 0; //inside innermost loop
	        for(int i=L;i<=R;i++) //i<R
	        {
	            sum+=a[i];
	        }
	        ans += sum;
	    }
	}
	cout << ans << '\n';

}

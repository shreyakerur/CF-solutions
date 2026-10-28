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
	for(int i=0;i<N;i++)
	{
	    ans+=1LL*(i+1)*(N-i)*a[i];
	}
	cout << ans << '\n';

}

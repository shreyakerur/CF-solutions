#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
	long long a[n];
	for(int i=0;i<=n-1;i++)
	{
	    cin >> a[i];
	}
	for(int i=0;i<=n-1;i++)
	{
	    sum = sum + a[i]; //sum+=a[i]
	}
	cout << sum;

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=1;i<=N;i++)
	{
	    cin >> a[i];
	}
	int i=N/2, j=N/2 + 1;
	while(i>0 and j<=N)
	{
	    cout << a[i] << ' ' << a[j] << ' ';
	    i--;
	    j++;
	}
}

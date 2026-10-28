#include <bits/stdc++.h>
using namespace std;

signed zero(long long n)
{
    long long count = 0;
    if(n==0)
    {
        return 1;
    }
    while(n!=0) //since number of iterations are unknown and digit extraction has to be executed till n becomes 0
    {
        if(n%10==0)
        {
            count++;
        }
        n = n/10;
    }
    return count;
}
signed main() {
	long long n;
	cin >> n;
	cout << zero(n);
}

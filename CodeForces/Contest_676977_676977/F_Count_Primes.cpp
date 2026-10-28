#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x)
{
    if(x<=1)
    {
        return false;
    }
    for(long long i=2;i*i<=x;i++)
	{
	    if(x%i==0)
	    {
	        return false;
	    }
	}
	return true;
}

	    
int main() {
	long long N;
	cin >> N;
	
	long long count = 0;
	long long p_count = 0;
	for(long long i=2;i<=N;i++)
	{
	    if(isPrime(i))
	    {
	        p_count++;
	    }
	}
	cout << p_count;


}

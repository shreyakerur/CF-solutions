#include <iostream>
using namespace std;

bool isPrime(int N)
{
    int count = 0;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            count++;
        }
    }
    return count == 2;
}

int main() {
	int N;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
	    if(isPrime(i))
	    {
	        cout<<i<<" ";
	    }
	}
}

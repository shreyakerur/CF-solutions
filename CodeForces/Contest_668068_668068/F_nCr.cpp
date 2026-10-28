#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}

int main() {
	int n;
	int r;
	cin >> n >> r;
	int nfact = factorial(n);
	int rfact = factorial(r);
	int nrfact = factorial(n-r);
	
	cout << nfact / (rfact * nrfact);
}

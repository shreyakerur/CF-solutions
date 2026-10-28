#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	for(long long i=n;i>=1;i--)
	{
	    for(long long j=1;j<=i;j++)
	    {
	        cout << "*";
	    }
	    cout << endl;
	}
}

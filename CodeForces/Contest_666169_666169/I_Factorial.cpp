#include <iostream>
using namespace std;

int main() {
	long long N;
	cin >> N;
	long long fact = 1;
	while(N>=1)
	{
	    fact = fact * N;
	    N--;
	}
	cout << fact;
}
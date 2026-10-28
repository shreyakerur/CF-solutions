#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int ans=0;
	if(n>=10)
	{
	    ans = n%100;
	    ans/=10;
	    cout << ans;
	}
	else
	{
	    cout << "single digit";
	}
    
}


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int R;
	    cin >> R; //not array
	    
	    int sum = 0;
	    while(R>0) //not for/if
	    {
	        //int temp = a[i];
	        sum+=(R%10);
	        R/=10;
	    }
	    if(sum==7)
	    {
	        cout << "Thala for a reason" << endl;
	    }
	    else
	    {
	        cout << "Blocked for no reason" << endl;
	    }
	}

}

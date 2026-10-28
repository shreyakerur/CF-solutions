#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;
	
	while(Q--)
	{
	    int T;
	    long long L,R;
	    cin >> T >> L >> R;
	    
	    if(L>R)
	    {
	        cout << 0 << endl;
	        continue;
	    }
	
	    long long ans =0;
	
	    if(T==1)
	    {
	        ans = R-L-1;
	    }
	    else if(T==2)
	    {
	        ans = R-L;
	    }
	    else if(T==3)
	    {
	        ans = R-L;
	    }
	    else if(T==4)
	    {
	        ans = R-L+1;
	    }
	
	    if(ans<0)
	    {
	        ans = 0;
	    }
	
	cout << ans << endl;
	}
	
}

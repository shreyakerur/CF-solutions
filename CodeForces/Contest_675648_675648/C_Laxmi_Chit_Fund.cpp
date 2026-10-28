#include <bits/stdc++.h>
using namespace std;

	
int main() {
	int N;
	cin >> N;
	int a[N];
	for(int i=0;i<N;i++)
	{
	   cin >> a[i];
	}
	
	int total=0, avg=0;
	int maxi=a[0], mini=a[0];
	
	//one loop works for multiple answers
	for(int i=0;i<N;i++)
	{
	    total+=a[i];
	    
	    //maxi=a[0];
	    if(a[i]>maxi)
        {
            maxi=a[i];
        }
        
        //mini=a[0];
        if(a[i]<mini)
        {
            mini=a[i];
        }
	}

    avg=total/N;
    cout << total << ' ' << maxi << ' ' << mini << ' ' << avg;
}

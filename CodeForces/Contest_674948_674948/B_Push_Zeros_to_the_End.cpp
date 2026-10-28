#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int N;
	    cin >> N;
	    int a[N];
	    for(int i=0;i<N;i++)
	    {
	        cin >> a[i];
	    }
	    int count = 0;
	    for(int i=0;i<N;i++)
	    {
	        
	        if(a[i]==0)
	        {
	            count++;
	        }
	        else
	        {
	            cout << a[i] << ' ';
	        }
	    }
	    for(int i=0;i<count;i++)
	    {
	        cout << "0" << ' ';
	    }
	    
	    cout << endl;
	}
}

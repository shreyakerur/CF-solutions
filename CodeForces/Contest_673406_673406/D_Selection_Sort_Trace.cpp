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
	
	for(int i=0;i<N-1;i++) //N-1 passes
	{
	    int mini = a[i];
	    int loc = i;
	    
	    for(int j=i;j<N;j++)
	    {
	        if(a[j]<mini)
	        {
	            mini = a[j];
	            loc = j;
	        }
	    }
	    swap(a[i],a[loc]);
	    
	    //output block within ith pass
	    cout << "Pass " << i+1 << ": ";
	    for(int k=0;k<N;k++)
	    {
	        cout << a[k] << ' ';
	    }
	    cout << " , min_selected = " << mini;
	    cout << endl;
	}
}

	    
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    
	for(int L=0;L<N;L++)
	{
	    for(int R=L;R<N;R++)
	    {
	        for(int i=L;i<=R;i++)
	        {
	            cout << A[i] << ' ';
	        }
	        cout << endl;
	    }
	}

}

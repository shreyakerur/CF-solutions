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
	    int count = 0;
	    for(int j=0;j<N-i-1;j++) //N-i-1 passes
	    {
	        if(a[j]>a[j+1])
	        {
	            swap(a[j],a[j+1]);
	            count++;
	        }
	    }
	   //output block
	   cout << "Pass " << i+1 << ": ";
	   for(int k=0;k<N;k++)
	   {
	       cout << a[k] << ' ';
	   }
	   cout << ", swaps = " << count << endl; 
	   
	   if(count==0) break; //placement of break statement
	}
}

	    
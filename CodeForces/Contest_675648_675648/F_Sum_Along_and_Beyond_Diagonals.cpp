#include <bits/stdc++.h>
using namespace std;

	
int main() {
	int N;
	cin >> N;
	long long a[N][N];
	for(int i=0;i<N;i++)
	{
	    for(int j=0;j<N;j++)
	    {
	        cin >> a[i][j];
	    }
	}
	
	long long diagonal_sum=0, non_diagonal_sum=0;
	long long first_sum=0, second_sum=0;
	
	for(int i=0;i<N;i++)
	{
	    for(int j=0;j<N;j++)
	    {
	        if(i==j)
	        {
	            first_sum+=a[i][j];
	        }
	        if(i!=j and i+j==N-1)
	        {
	            second_sum+=a[i][j];
	        }
	        if(i!=j and i+j!=N-1)
	        {
	            non_diagonal_sum+=a[i][j];
	        }
	    }
	}
	diagonal_sum = first_sum+second_sum;
	cout << diagonal_sum << ' ' << non_diagonal_sum;
	
}

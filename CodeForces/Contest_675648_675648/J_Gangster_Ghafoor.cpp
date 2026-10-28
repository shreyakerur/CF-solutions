#include <bits/stdc++.h>
using namespace std;

void visit(int x)
{	    
    if(x==-1)
	{
	   exit(0);
	}
    cout << x << ' ';	
}
	
int main() {
	int N, M;
	cin >> N >> M;
	int a[N][M];
	for(int i=0;i<N;i++)
	{
	    for(int j=0;j<M;j++)
	    {
	        cin >> a[i][j];
	    }
	}
	
	for(int i=N-1;i>=0;i--)
	{
	   visit(a[i][0]);
	}
	    
	for(int j=1;j<M;j++)
	{
	   visit(a[0][j]);
	}
	    
	for(int i=1;i<N;i++)
	{
	   visit(a[i][M-1]);
	}
	    
	for(int j=M-2;j>0;j--)
	{
	   visit(a[N-1][j]);
	}
}

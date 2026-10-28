#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int a[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> a[i][j];
        }
    }
    
    int i=0, j=0, sum=0;
    while(i<N and j<N)
    {
        sum+=a[i][j];
        i++;
        j++;
    }
    cout << sum;
}

	    
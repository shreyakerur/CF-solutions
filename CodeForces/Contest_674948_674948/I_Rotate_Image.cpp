#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin >> a[i][j];
        }
    }
    
    for(int j=0;j<N;j++)
    {
        for(int i=N-1;i>=0;i--)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

}

	    
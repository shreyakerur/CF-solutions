#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;
    int a[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> a[i][j];
        }
    }
    
    int sr = 0, er = N-1; //i
    int sc = 0, ec = M-1; //j
    
    while(sr<=er and sc<=ec)
    {
        //1 i=0, j=0 to M-1
        for(int j=sc;j<=ec;j++)
        {
            cout << a[sr][j] << ' ';
        }
        //2 j=M-1, i=1 to N-1
        for(int i=sr+1;i<=er;i++)
        {
            cout << a[i][ec] << ' ';
        }
        
        //3 i=N-1, j=M-2 to 0
        if(sr!=er)
        {
            for(int j=ec-1;j>=sc;j--)
            {
                cout << a[er][j] << ' ';
            }
        }
        
        //4 j=0, i=N-2 to 1
        if(sc!=ec)
        {
            for(int i=er-1;i>=sr+1;i--)
            {
                cout << a[i][sc] << ' ';
            }
        }
        
        sr++;
        er--;
        sc++;
        ec--;
        
    }
    

}

	    
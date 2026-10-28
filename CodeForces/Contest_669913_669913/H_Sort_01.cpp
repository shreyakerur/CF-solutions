#include <bits/stdc++.h>
using namespace std;

void sort01(int N)
{
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    int c0 = 0;
    int c1 = 0;
    for(int i=0;i<N;i++)
    {
        if(a[i]==0)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    
    for(int i=1;i<=c0;i++)
    {
        cout << "0" << " ";
    }
    
    for(int i=1;i<=c1;i++)
    {
        cout << "1" << " ";
    }
    
}

int main() {
    int t;
    cin >> t;
    for(int i=t;i>=1;i--)
    {
        int N;
        cin >> N;
        sort01(N);
        cout << endl;
    }
}


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
    
    int c0=0, c1=0, c2=0;
    for(int i=0;i<N;i++)
    {
        if(a[i]==0)
        {
            c0++;
        }
        else if(a[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    for(int i=0;i<c2;i++)
    {
        cout << "2" << ' ';
    }
    for(int i=0;i<c1;i++)
    {
        cout << "1" << ' ';
    }
    for(int i=0;i<c0;i++)
    {
        cout << "0" << ' ';
    }
 
}
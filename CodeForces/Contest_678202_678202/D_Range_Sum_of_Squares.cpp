#include <bits/stdc++.h>
using namespace std;

int main() {
    //input array
    long long N;
    cin>>N;
    long long Q;
    cin>>Q;
    long long a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    
    //build prefix sum
    long long P[N];
    long long sum=0;

    for(int i=0;i<N;i++)
    {
        sum+=a[i]*a[i];
        P[i] = sum;
    }
    
    //output block
    while(Q--)
    {
        int L,R;
        cin >> L >>R;
        L--;
        R--;
        if(L==0)
        {
            cout << P[R];
        }
        else
        {
            cout << P[R]-P[L-1];
        }
        cout << endl;
    }
}

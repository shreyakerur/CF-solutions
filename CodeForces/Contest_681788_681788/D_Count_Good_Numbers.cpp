#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int goodcount=0;
    set<long long> good;
    for(int i=0;i<M;i++)
    {
        long long x; //x is actual input value while i is for iteration counter
        cin>>x; //no mixing please
        good.insert(x);
    }
    
    for(int i=0;i<K;i++)
    {
        if(good.count(A[i]))
        {
            goodcount++;
        }
    }
    cout<<goodcount<<" ";
    
    for(int i=K;i<N;i++)
    {
        if(good.count(A[i]))
        {
            goodcount++;
        }
        if(good.count(A[i-K]))
        {
            goodcount--;
        }
        cout<<goodcount<<" ";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    long long sum=0;
    int ans=0;
    int L=0;
    for(int R=0;R<N;R++)
    {
        //include R
        sum+=A[R];
        while(sum>=K) //invalid window
        {
            //exclude L and shrink window
            sum-=A[L];
            L++;
        }
        ans=max(ans,R-L+1);
    }
    cout<<ans;
}

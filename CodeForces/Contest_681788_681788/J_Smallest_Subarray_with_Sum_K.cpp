#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long K;
    cin >> K;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    
    long long sum=0, ans=LLONG_MAX;
    
    int L=0;
    for(int R=0;R<N;R++)
    {
        sum+=A[R];
        while(sum>K)
        {
            ans=min(ans,1LL*(R-L+1));
            sum-=A[L];
            L++;
        }
    }
    
    //if no valid subarrays exist
    if(ans == LLONG_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}

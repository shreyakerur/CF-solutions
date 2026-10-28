#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long K;
    cin >> N >> K;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    
    unordered_map<long long,int> freq;
    long long ans=0;
    int L=0;
    for(int R=0;R<N;R++)
    {
        freq[A[R]]++;
        while(freq.size()>K)
        {
            freq[A[L]]--;
            if(freq[A[L]]==0)
            {
                freq.erase(A[L]);
            }
            L++;
        }
        ans+=R-L+1;
    }
    cout << ans;
}

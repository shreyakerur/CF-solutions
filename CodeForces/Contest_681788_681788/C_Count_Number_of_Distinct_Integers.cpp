#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    map<long long,int> freq;
    //first window
    for(int i=0;i<K;i++)
    {
        freq[A[i]]++;
    }
    cout<<freq.size()<<" ";
    
    //second window
    for(int i=K;i<N;i++)
    {
        freq[A[i]]++;
        freq[A[i-K]]--;
        if(freq[A[i-K]]==0)
        {
            freq.erase(A[i-K]);
        }
        cout<<freq.size()<<" ";
    }
}

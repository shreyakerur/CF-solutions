#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    
    int M;
    cin >> M;
    long long B[M];
    for(int i=0;i<M;i++)
    {
        cin >> B[i];
    }
    
    set<long long> st;
    
    for(int i=0;i<N;i++)
    {
        st.insert(A[i]);
    }
    for(int i=0;i<M;i++)
    {
        st.insert(B[i]);
    }
    
    int K = st.size();
    cout << K << endl;
    
    for(auto x : st)
    {
        cout << x << ' ';
    }
    
}

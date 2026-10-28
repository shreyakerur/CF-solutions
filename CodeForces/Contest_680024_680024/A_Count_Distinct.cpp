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
    
    set<long long> st;
    for(int i=0;i<N;i++)
    {
        st.insert(A[i]);
    }
    cout << st.size();
}

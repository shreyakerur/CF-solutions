#include <bits/stdc++.h>
using namespace std;

bool checkTwoSum(long long A[], int N, int X)
{
    set<long long> st; //int -> long long
    for(int i=0;i<N;i++)
    {
        long long req = X - A[i];
        if(st.find(req) != st.end())
        {
            return true;
        }
        st.insert(A[i]);
    }
    return false;
}

int main() {
    int N, X;
    cin >> N >> X;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    if(checkTwoSum(A,N,X)) //pass A, not A[N]. forgot print block
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}

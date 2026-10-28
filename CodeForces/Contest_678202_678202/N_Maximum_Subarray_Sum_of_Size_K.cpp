#include <bits/stdc++.h>
using namespace std;

//O(N) -> 1 ≤ K ≤ N ≤ 10^5
int main() {
    int N, K;
    cin >> N >> K;
    long long A[N]; //|ai| ≤ 10^9
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    //BUILD FIRST WINDOW
	long long sum = 0;
	long long maxSum=0;
    for(int i=0;i<K;i++)
    {
        sum+=A[i];
    }
    maxSum=sum;
    
    //BUILD REMAINING WINDOW
    for(int i=K;i<N;i++)
    {
        sum+=A[i];
        sum-=A[i-K];
        maxSum=max(maxSum,sum); //inside the loop
    }
    cout << maxSum;
}

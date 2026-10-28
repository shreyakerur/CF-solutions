#include <bits/stdc++.h>
using namespace std;

int first_occur(long long x, int N, long long A[])
{
    int L=0, R=N-1;
    int ans=-1;
    while(L<=R)
    {
        int mid=(L+R)/2;
        if(A[mid]==x)
        {
            ans=mid;
            R=mid-1;
        }
        else if(A[mid]>x)
        {
            R=mid-1;
        }
        else
        {
            L=mid+1;
        }
    }
    if(ans == -1)
        return -1;
    return ans+1;
}
int last_occur(long long x, int N, long long A[])
{
    int L=0, R=N-1;
    int ans=-1;
    while(L<=R)
    {
        int mid=(L+R)/2;
        if(A[mid]==x)
        {
            ans=mid;
            L=mid+1;
        }
        else if(A[mid]>x)
        {
            R=mid-1;
        }
        else
        {
            L=mid+1;
        }
    }
    if(ans == -1)
        return 0;
    return ans+1;
}
int main() {
    int N,Q;
    cin >> N >> Q;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    while(Q--)
    {
        long long x;
        cin>>x;
        int first = first_occur(x,N,A);
        int last = last_occur(x,N,A);
        if(first==-1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << first << ' ' << last << endl;
        }
        
    }
}

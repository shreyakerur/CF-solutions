#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, Q;
    cin >> N >> Q;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    long long P[N], sum=0;
    for(int i=0;i<N;i++)
    {
        if(i%2==0)
        {
            sum+=A[i];
        }
        else
        {
            sum+=-A[i];
        }
        P[i]=sum;
    }
    
    long long result;
    while(Q--)
    {
        int L,R;
        cin>>L>>R;
        L--; //INDEX
        R--; //INDEX
        if(L==0)
        {
            result=P[R]; //basic index-based calculations
        }
        else
        {
            result=P[R]-P[L-1]; //P[3]-P[0]=-3
        }
        if(L%2==1)
        {
            result=-result; //+3
        }
        cout<<result<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    int K;
    cin >> K;
    long long a[N];
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    
    int count=0;
    long long P[N];
    for(int i=0;i<N;i++)
    {
        int count_div=0;
        
        for(int j=1;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                int k=a[i]/j;
                if(j==k)
                {
                    count_div++;
                }
                else
                {
                    count_div+=2;
                }
            }
        }
        if(count_div==K)
        {
            count++;
        }
        P[i]=count;
        //cout << P[i] << ' ';
    }
    //cout << endl;
    
    while(Q--)
    {
        int L,R;
        cin >> L >> R;
        L--;
        R--;
        if(L==0)
        {
            cout << P[R];
        }
        else
        {
            cout << P[R]-P[L-1];
        }
        cout << endl;
    }
}

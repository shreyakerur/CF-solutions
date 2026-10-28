#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin >> a[i];
        }
        
        int mini = a[0];
        int K = 0;
        for(int i=0;i<N;i++)
        {
            if(a[i]<mini)
            {
                mini = a[i];
                K = i;
            }
        }
        cout << K << endl;
    }
}

	    
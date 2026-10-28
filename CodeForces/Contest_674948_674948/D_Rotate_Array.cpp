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
        int D;
        cin >> D;
        for(int i=D;i<N;i++)
        {
            cout << a[i] << ' ';
        }
        for(int i=0;i<D;i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }

}

	    
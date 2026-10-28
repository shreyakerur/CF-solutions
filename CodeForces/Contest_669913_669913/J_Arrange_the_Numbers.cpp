//L. Missing Number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        
        for(int i=1;i<=N;i+=2)
        {
            cout << i << ' ';
        }
        
        for(int i=N;i>=1;i--)
        {
            if(i%2==0)
            {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    //input array
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    //prefix array
    int P[n], count=0;
    for(int i=0;i<n;i++)
    {
        char ch = s[i]; //variable assignment to avoid repeated use of s[i] in condition
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
        P[i]=count;
    }
    
    //output block
    int Q;
    cin>>Q;
    while(Q--)
    {
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        if(L==0)
        {
            cout << P[R];
        }
        else
        {
            cout << P[R] - P[L-1];
        }
        cout << endl;
    }
}

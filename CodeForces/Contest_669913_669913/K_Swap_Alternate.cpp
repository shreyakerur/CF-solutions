//K. Swap Alternate
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        int A[N];
        
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        
        for(int i=0;i + 1<N;i+=2)
        {
            int temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
        
        for(int i=0;i<N;i++)
        {
            cout << A[i] << ' '; 
        }
        cout << endl;
    }   
}
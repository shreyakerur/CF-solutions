#include <bits/stdc++.h>
using namespace std;
	    
int main() {
    long long Q;
    cin >> Q;
    
    while(Q--)
    {
        long long L,R;
        cin >> L >> R;
        
        long long sumR = R*(R+1)/2;
        long long sumL = (L-1)*L/2;
        
        cout << sumR - sumL << endl;
    }

}

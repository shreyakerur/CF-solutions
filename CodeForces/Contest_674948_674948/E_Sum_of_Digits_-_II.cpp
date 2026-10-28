#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    int sum=0;
    
    for(int i=0;i<N.size();i++)
    {
        sum+=N[i]-'0'; //conversion
    }
    cout << sum;
}


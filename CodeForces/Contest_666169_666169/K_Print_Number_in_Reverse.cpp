#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    if(N==0)
    {
        cout << 0;
    }
    while(N!=0)
    {
        cout << N%10;
        N = N/10;
    }
}

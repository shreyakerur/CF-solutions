#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long rev = 0;
    long long temp = N;

    while(N!=0)
    {
        rev = (rev*10) + N%10;
        N = N/10;
    }
    if(rev==temp)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

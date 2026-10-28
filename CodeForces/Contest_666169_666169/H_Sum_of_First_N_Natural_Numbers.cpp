#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long i = 1;
    long long sum = 0;
    while(i<=N)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
}

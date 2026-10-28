#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long count = 0;
    if(n==0)
    {
        count++;
    }
    while(n!=0)
    {
        if(n%10==0)
        {
            count++;
        }
        n=n/10;
    }
    cout << count;
}
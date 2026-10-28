#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin >> x;

        if((x!=0 and 18%x==0) or x%45==0)
        {
            count++;
        }
    }
    cout << count;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin >> a[i];
        }
        int M;
        cin >> M;
        int arr[M];
        for(int i=0;i<M;i++)
        {
            cin >> arr[i];
        }
        
        int ans = 0;
        for(int i=0;i<N;i++)
        {
            int count = 0;
            //removed target
            for(int j=0;j<M;j++)
            {
                if(arr[j]==a[i])
                {
                    cout << a[i] << ' '; //imp
                    arr[j] = -1; //new - mark as used
                    break; 
                }
            }
        }
        cout << endl;
    }
}
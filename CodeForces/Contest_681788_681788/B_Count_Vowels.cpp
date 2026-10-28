#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return true;
    }
    return false;
}
int main() {
    int N,K;
    cin>>N>>K;
    string S;
    cin>>S;
    
    //first window
    int count=0;
    for(int i=0;i<K;i++)
    {
        if(isVowel(S[i]))
        {
            count++;
        }
    }
    cout<<count<<" ";
    
    //second window
    for(int i=K;i<N;i++)
    {
        if(isVowel(S[i]))
        {
            count++;
        }
        if(isVowel(S[i-K]))
        {
            count--;
        }
        cout<<count<<" ";

    }
}

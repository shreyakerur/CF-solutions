#include <iostream>
using namespace std;

void printcol(int n,int i)
{
    for(int j=1;j<=n-i;j++)
    {
        cout << " ";
    }
    for(int j=1;j<=i;j++)
    {
        if(j==i)
        {
            cout << ".";
        }
        else
        {
            cout << ". ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    for(int i=n;i>=2;i--)
    {
        printcol(n,i);
        cout << endl;
    }
    
    for(int i=1;i<=n;i++)
    {
        printcol(n,i);
        cout << endl;
    }
}

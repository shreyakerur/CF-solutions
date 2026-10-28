#include <iostream>
using namespace std;

void printcols(int i)
{
    for(int j=1;j<=i-1;j++)
    {
        cout << " ";
    }
    for(int j=1;j<=i;j++)
    {
        if(i==1 or j==1 or j==i)
        {
            if(j==i)
            {
                cout << ">";
            }
            else
            {
                cout << "> ";
            }
            
        }
        else
        {
            cout << "  ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        printcols(i);
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        printcols(i);
        cout<<endl;
    }
    
}

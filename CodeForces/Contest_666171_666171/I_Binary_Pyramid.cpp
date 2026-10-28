#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
	    int num;
	    if(i%2==1)
	    {
	        num = 0;
	    }
	    else
	    {
	        num = 1;
	    }
	    for(int j=1;j<=i;j++)
	    {
	        cout << num%2;
	        num++;
	    }
	    cout << endl;
	}
	
}

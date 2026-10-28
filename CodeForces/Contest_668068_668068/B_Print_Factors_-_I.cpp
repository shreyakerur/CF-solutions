#include <iostream>
using namespace std;

void printf(int N)
{
    for(int i=1; i<=N; i++)
    {
        if(N%i==0)
        {
            cout << i << " ";
        }
    }
    
}
int main() {
    
	int N;
	cin >> N;
	printf(N);

}

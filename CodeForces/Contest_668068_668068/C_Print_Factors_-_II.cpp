#include <iostream>
using namespace std;

void printfact(int N)
{
    for(int i=N; i>=1; i--)
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
	printfact(N);

}

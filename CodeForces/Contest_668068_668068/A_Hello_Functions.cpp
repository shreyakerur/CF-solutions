#include <iostream>
using namespace std;

void printf(int N)
{
    for(int i=1; i<=N; i++)
    {
        cout << "I am learning functions" << endl; 
    }
    
}
int main() {
    
	int N;
	cin >> N;
	printf(N);

}

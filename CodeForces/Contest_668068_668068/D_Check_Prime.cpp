#include <iostream>
using namespace std;

bool isPrime(int N)
{
    int count = 0;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            count++;
        }
    }
    return count==2; //true or false
}

int main() {
    
	int N;
	cin >> N;
	if(isPrime(N)) //true
	{
	    cout << "Prime";
	}
	else //false
	{
	    cout << "Not Prime";
	}

}

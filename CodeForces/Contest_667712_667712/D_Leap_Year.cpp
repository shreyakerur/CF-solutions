#include <iostream>
using namespace std;


int main() {
	int Y;
	cin >> Y;
	
	if(Y%400==0)
	{
	   cout << "Yes";
	}
	else if(Y%4==0 and Y%100!=0)
	{
	   cout << "Yes";
	}
	else
	{
	   cout << "No";
	}
    
}


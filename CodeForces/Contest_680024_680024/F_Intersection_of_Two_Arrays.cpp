#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	long long A[N];
	
	set<long long> setA;
	for(int i=0;i<N;i++)
	{
	    cin >> A[i];
	    setA.insert(A[i]);
	}
	int M;
	cin >> M;
	long long B[M];
	
	set<long long> setB;
	for(int i=0;i<M;i++)
	{
	    cin >> B[i];
	    setB.insert(B[i]);
	}
	
	set<long long> intersection;
	for(auto x:setA)
	{
	    if(setB.count(x))
	    {
	        intersection.insert(x);
	    }
	}
	
	cout << intersection.size() << endl;
	
	for(auto x:intersection)
	{
	    cout << x << ' ';
	}

}

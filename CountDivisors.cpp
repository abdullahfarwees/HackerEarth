/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/ */

#include <iostream>
using namespace std;

void fun()
{
	int l,r,k;
	int count = 0;
	cin>>l;
	cin>>r;
	cin>>k;
	
	for(int i=l; i<=r; i++)
	{
		if( i%k == 0)count++;
	}
	
	cout<<count;
	
}

int main()
{
    fun();
    return 0;
}

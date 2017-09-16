#include <iostream>
using namespace std;

/* https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/ */

int main()
{
int tc;
cin>>tc;

while(tc--)
{
	int n , count = 0;
	cin>>n;
	while(n)
	{
		n = n & (n-1);
		count++;
	}

	cout<<count<<endl;
}

}

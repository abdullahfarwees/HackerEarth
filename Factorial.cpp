/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/ */

#include <iostream>
using namespace std;

void fact()
{
	int n;
	cin>>n;
	int fact = 1;
	for(int i = 1; i <= n; i++)
	{
		fact = fact*i;
		
	}
	cout<<fact;
	
	
}

int main()
{
    fact();
    return 0;
}

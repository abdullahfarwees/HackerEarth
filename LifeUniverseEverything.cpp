#include <iostream>
using namespace std;

/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/ */

void fun()
{
	int n;
	cin>>n;
	while( n != 42 )
	{
		cout<<n<<endl;
		cin>>n;
		
	}
}

int main()
{
    fun();
    return 0;
}

#include <iostream>
#include <algorithm>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/warcakewalk/ */

using namespace std;

int fun()
{

int size;
cin>>size;

int bob[size];
int alice[size];

for(int i=0;i< size;i++)
{
	cin>>bob[i];
}

for(int i=0;i< size;i++)
{
	cin>>alice[i];
}

	sort(bob,bob+size);
	sort(alice,alice+size);

	if( bob[size-1] > alice[size-1] )
	{
		cout<<"Bob"<<endl;
	}
	else if( bob[size-1] < alice[size-1] )
	{
		cout<<"Alice"<<endl;
	}
	else
	{
		cout<<"Tie"<<endl;
	}

}

int main()
{

int tc;
cin>>tc;

for(int t=0;t<tc;t++)
{
	fun();
}

return 0;
}
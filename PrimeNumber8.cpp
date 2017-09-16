/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/ */

#include<bits/stdc++.h>

// basic programming -> input/output -> prime 

using namespace std;

bool primeGen(int num)
{
if(num < 2)return false;
int sq_val = sqrt(num);

for(int i=2; i<= sq_val; i++)
{
	if( num % i == 0)return false;
}

return true;
}

int main()
{

int n;
cin>>n;

int count = 0;

while(n--)
{
	if(primeGen(count))
	{
		printf("%d ",count);
	}
	count++;
	
}
cout<< endl;

return 0;
}
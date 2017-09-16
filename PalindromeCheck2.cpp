#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/ */

using namespace std;

void fun()
{
	char str[100];
	cin>>str;
	int len = strlen(str);
	int i = 0; 
	int j = len-1;

	while( i <= j )
	{
	
		if( str[i] == str[j] )
		{
			i++;
			j--;
			
		}
		else if( str[i] != str[j])
		{
			cout<<"NO";
			exit(0);
		}
		else if( i > j)
		{
			cout<<"NO";
			exit(0);	
		}
	}

cout<<"YES";
}

int main()
{

fun();

return 0;
}
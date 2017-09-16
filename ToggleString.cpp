#include <iostream>
#include <cstring>
using namespace std;

/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/ */

char convertLOWER(char in)
{
in = in-('Z'-'z');
cout<<in;	
}

char convertUPPER(char in)
{

in = in-('z'-'Z');
cout<<in;	
}

void fun()
{

	char str[250];
	cin>>str;

	for(int i = 0; i < strlen(str); i++)
	{
		if( str[i] >= 'A' && str[i] <= 'Z' )
		{
			convertLOWER(str[i]);
		}
		else if( str[i] >= 'a' && str[i] <= 'z' )
		{
			convertUPPER(str[i]);
		}
		
	}

}

int main()
{

fun();


    return 0;
}
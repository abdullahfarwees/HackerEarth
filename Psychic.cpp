/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/psychic-powers/#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

void fun()
{

	char str[100];
	cin>>str;

	for(int i = 0; i < strlen(str); i++)
	{
		if( (str[i] == '1' && str[i+1] == '1' && str[i+2] == '1' && str[i+3] == '1' && str[i+4] == '1' && str[i+5] == '1' ) || ( str[i] == '0' && str[i+1] == '0' && str[i+2] == '0' && str[i+3] == '0' && str[i+4] == '0' && str[i+5] == '0' ))
		{
			
			cout<<"Sorry, sorry!";
			exit(0);
		}
	
	}
	
cout<<"\n\nGood luck!";
}

int main()
{

fun();

return 0;
} */
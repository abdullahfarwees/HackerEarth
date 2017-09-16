//  Palindromic Ciphers 
/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/palindromic-ciphers/ */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

static int len = 0;

void mully(string str);

bool palin(string str)
{


	int start = 0;
	int end = str.size()-1;

	len = end; // copy to global variable

	while(true)
	{

	if(str[start] != str[end])
	return false;


	if( start == end || (start+1 == end) )
	{
		break;
	}

	start++;
	end--;

	}

return true;
}

void mully(string str)
{
	long long int mul = 1;

	for(int i = 0 ; i <= len ; i++)
	{
		mul = mul * ((str[i]-'a')+1);
	}

cout<<mul<<endl;

}


void fun()
{

	string str;
	cin>>str;


	if(palin(str))cout<<"Palindrome"<<endl;
	else
	{
		mully(str);
	}
	//;

}

int main()
{

	long long int tc;
	cin>>tc;

	for(long long int i=0;i<tc;i++)
	{
	fun();
	}

return 0;
}
/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-best-internet-browser-3/ */

#include <iostream>
#include <cstring>

using namespace std;

int count_vowel_fun(char ch)
{
	int ret = 0;
	if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
	++ret;
	}


return ret;
}

int fun()
{
char str[200];
cin>>str;

int dot_count = 0;
int vowel_cnt = 0;
int no_vowel_cnt = 0;
int char_count = 0;
int rem = 0;

	for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] == '.')++dot_count;
		++char_count;
		if( dot_count < 2)
		{
		vowel_cnt = vowel_cnt + count_vowel_fun(str[i]);
		}
		else
		{
		++rem;
		}
	}

vowel_cnt = vowel_cnt + rem;
no_vowel_cnt = char_count - vowel_cnt;
cout<<no_vowel_cnt<<"/"<<char_count<<endl;
}

int main()
{
int tc;
cin>>tc;

for(int t=0; t<tc ; t++)fun();


return 0;
}
/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/complete-string-4/ */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>


using namespace std;

int fun()
{
int count = 0;
char str[101];
cin>>str;
int len = strlen(str);
int array[26]; // 0....25

	/* initialize array[] to 0 */
	for(int i=0;i<26;i++)array[i] = 0;

	/* increment based on values */
	for(int i=0;i<len;i++)
	{
		array[str[i]-'a']++;
	}
	
	/* single traversal of array[] */
 	for(int i=0;i<26;i++)
	{
		if(array[i] > 0)
		{
		++count;
		}
	}

	if(count == 26)
	{
	cout<<"YES\n";
	}
	else
	{
	cout<<"NO\n";
	}
	
}

int main()
{

int tc;
cin>>tc;

for(int i =0;i<tc;i++)
fun();

return 0;
}
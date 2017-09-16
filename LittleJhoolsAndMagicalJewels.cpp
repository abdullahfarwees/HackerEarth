/* https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/ */ 

#include<bits/stdc++.h>

using namespace std;

int main()
{
int tc;
cin>>tc;

string str;
int size = 0;

int temp[26];

while(tc--)
{

	cin>>str;
	size = str.size();

	for(int i=0; i<26; i++)
	{
		temp[i] = 0;
	}

	for(int i=0; i<size; i++)
	{
		temp[str[i]-'a']++;
	}
	
	int r = temp[17];
	int u = temp[20];
	int b = temp[1];
	int y = temp[24];

/*	for(int i=0; i<26; i++)
	{
		cout<<temp[i]<<" ";
	}
*/
	
	int count = 0;
	while( (r>0) && (u>0) && (b>0) && (y>0))
	{
	++count;
	r--;u--;b--;y--;
	
	}
	
	cout<<count<<endl;

// 2 18 21 25 // -1

}

return 0;
}
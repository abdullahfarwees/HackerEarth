/* https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-lucky-minimum-3/ */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int tc;
	cin>>tc;
	while(tc--)
	{
	
	int size;
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++)
	cin>>arr[i];
	
	int min = INT_MAX;
	for(int i=0;i<size;i++)
	{
		if( min >= arr[i])
		{
			min = arr[i];
		}
	}
	
	int count = 0;
	for(int i=0;i<size;i++)
	{
		if( min == arr[i])++count;
	}
		
	if(count % 2 != 0)
	{
		cout<<"Lucky\n";
	}
	else
	{
		cout<<"Unlucky\n";
	}
		
	}
	
    
    return 0;
}

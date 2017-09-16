#include<iostream>
#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/min-max-3/ */

using namespace std;

int main()
{

	int N;
	cin>>N;

	int arr[N];

	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+N);
	
	bool flag = true;
	
	for(int k=0;k<N-1;k++)
	{
		if( ((arr[k]+1) == arr[k+1]) || (arr[k] == arr[k+1]) )
		{
			// do nothing
		}
		else
		{
			flag = false;
			break;
		}
	
	}

	if(flag)
	{
		cout<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	
return 0;
}
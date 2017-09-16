#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/tutorial/ */

using namespace std;

int main()
{

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int swap_count = 0;
for(int k=0;k<n-1; k++)
{
	for(int t=0; t< n-k-1; t++)
	{
		if(arr[t] > arr[t+1])
		{
			int temp = arr[t];
			arr[t] = arr[t+1];
			arr[t+1] = temp;
		++swap_count;
		}
		
	}
}

cout<<swap_count<<endl;

return 0;
}
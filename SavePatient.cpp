#include<bits/stdc++.h>

/* https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/ */

using namespace std;

int main()
{
long int n;
cin>>n;

bool result = true;

int stng[n];
int patcnt[n];

for(int i=0;i<n;i++)
{
cin>>stng[i];
}

for(int i=0;i<n;i++)
{
cin>>patcnt[i];
}

sort( stng , stng+n);
sort( patcnt , patcnt+n);

for(int i=0;i<n;i++)
{
	if( patcnt[i] > stng[i] )
	{
		result = false;
		break;
	}

}

if(result)
cout<<"Yes\n";
else
cout<<"No\n";



return 0;
}
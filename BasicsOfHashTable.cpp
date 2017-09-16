#include<bits/stdc++.h>

using namespace std;

int main()
{

pair<int,char[5000]> intch;

long long int n;
cin>>n;

vector< pair<long long int,char[5000]> > vec(n);
vector< pair<long long int,char[5000]> >::iterator it;

for(it = vec.begin() ; it != vec.end(); it++)
{
cin>>it->first >> it->second;
}

long long int q;
cin>>q;

while(q--)
{
long long  rno;
cin>>rno;

	for(it = vec.begin() ; it != vec.end(); it++)
	{
		if( rno == it->first )
		cout<<it->second<<endl;
	}
}

return 0;
}


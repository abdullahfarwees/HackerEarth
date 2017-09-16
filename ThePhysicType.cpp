#include<iostream>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-psychic-type/ */

using namespace std;

bool fun(int SIZE)
{
int arr[SIZE];

for(int k=1;k<=SIZE;k++)cin>>arr[k];

int S,E;
cin>>S>>E;

if(S == E)return true;

int count = 0;

int prev_idx = 0;
int cur_idx = S;

	while(true)
	{
	
		if(arr[cur_idx] == E)
		{
			return true;
		}
		else  /* loop required to break at certain point */
		{
			cur_idx = arr[cur_idx];
			++count;
			
			if( prev_idx == cur_idx)
			++count;
			
			if( count >= SIZE)break;
			
		}

	
	}

		
return false;

}

int main()
{

int N;
cin>>N;

	if(fun(N))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}

return 0;
}
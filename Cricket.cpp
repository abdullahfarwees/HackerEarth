/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/cricket-rating-30/ */

#include <iostream>

using namespace std;

int fun()
{

int N;
cin>>N;

int arr[N];
int sum = 0;
int final_sum = 0;

for(int i=0;i<N;i++)
{
cin>>arr[i];
}

for(int i=0;i<N;i++)
{
	if(sum >= 0 )
	{
	sum = sum+arr[i];	
	}
	
	if( sum < 0 )
	{
	sum = 0;
	}
	
	if(final_sum < sum)
	{
	final_sum = sum;
	}
}

cout<<final_sum<<endl;

}

int main()
{
fun();
return 0;
}
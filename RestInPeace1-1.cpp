#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool manupulate(int num)
{

	while(num)
	{
	int rem = num % 100;

	if( rem == 21)
	{
	return true;
	}
	
	num = num / 10;
	}

return false;
}

void fun(int num)
{

	if( num % 21 == 0)
	{
		cout<<"The streak is broken!"<<endl;
		return;
	}
	else
	{
		bool flag = manupulate(num);
		if(flag)
		{
			cout<<"The streak is broken!"<<endl;
			return;
		}
		else
		{
			cout<<"The streak lives still in our heart!"<<endl;
			return;
			
		}
	
	}



	
cout<<"The streak lives still in our heart!"<<endl;		
}

int main()
{

int tc;
cin>>tc;

for(int t=0;t<tc;t++)
{
int val;
cin>> val;
fun(val);
}

return 0;
}

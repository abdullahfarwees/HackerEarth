/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/ */

#include <iostream>
using namespace std;

void facebook()
{
	
	int l,w,h;
	int t;
	
	cin>>l;
	
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		cin>>w;
		cin>>h;
		
		//case 1 :
		if( w < l || h < l)
		{
			cout<<"UPLOAD ANOTHER"<<endl;	
		}
		else if( w == h) // case 2
		{
			cout<<"ACCEPTED"<<endl;
		}
		else // case 3
		{
			cout<<"CROP IT"<<endl;
		}
		
		
	}
	
	
	
	
}

int main()
{
   facebook();
    return 0;
}

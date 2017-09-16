#include<iostream>
#include<vector>
#include<stack>

/* https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/ */

using namespace std;

void fun()
{
int type;
int query;
int t;

vector<int> v;
stack<int> st;

cin>>query;



	for(int i=0;i<query;i++)
	{

		cin>>type;
		if( type == 1 )
		{

			if(st.empty() )
			{
			cout<<"No Food"<<endl;
			}
			else
			{
			cout<<st.top()<<endl;
			st.pop();
			}

			
		}
		else if( type == 2 )
		{	

			cin>>t;
			st.push(t);

		}

	}




}

int main()
{
fun();

return 0;
}
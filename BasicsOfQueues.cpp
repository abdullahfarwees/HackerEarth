#include<bits/stdc++.h>

using namespace std;

/* https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial/ */

int main()
{
int n;
cin>>n;

queue<int> q;

while(n--)
{
	char ch;
	int num;

	cin>>ch;
	if(ch == 'E')
	{
		cin>>num;
		q.push(num);
		cout<<q.size()<<endl;
	}
	else if(ch == 'D')
	{
		if(q.empty())
		{
			cout<<"-1"<<" "<<q.size()<<endl;;
		}
		else
		{
			cout<<q.front()<<" ";
			q.pop();
			cout<<q.size()<<endl;
		}

	}

} // end-while

return 0;
}
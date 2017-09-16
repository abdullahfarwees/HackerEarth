#include <bits/stdc++.h>
#include <string.h>

/* https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/nice-arches-1/ */

using namespace std;

int main()
{
static int count = 0;

int n;
cin>>n;

while(n--)
{
char str[1000001];
cin>>str;

stack<char> s;

long long int size = strlen(str);

for(int i=0;i<size;i++)
{

if(s.empty())
{
s.push(str[i]);
}
else if(s.top() == str[i] )//else if( strcmp(s.top(),str[i]) == 1 )
{
s.pop();
}
else
{
s.push(str[i]);
}


} // end-for

if( s.empty() )++count;

}

cout<<count<<endl;

return 0;
}
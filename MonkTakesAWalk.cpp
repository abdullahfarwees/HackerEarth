#include<iostream>

/* https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/ */

using namespace std;

void fun()
{
string str;
cin>>str;

int count = 0;

for(int i=0;i<str.size();i++)
{
if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
{
++count;
}
}

cout<<count<<endl;

}

int main()
{
int tc;
cin>>tc;

for(int t=0;t<tc;t++)fun();

return 0;
}
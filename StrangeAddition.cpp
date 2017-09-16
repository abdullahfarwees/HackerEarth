/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-reversed-numbers/ */

#include <iostream>
using namespace std;

long long int reverse(long long int num)
{
  long long int rem;
  long long int divs;
  long long int ret = 0 ;

  while(num)
  {
    rem = num % 10;
    num = num / 10;
    ret = ret*10 + rem;
  }

  num = ret;
  return num;

}

void fun()
{
  long long int a;
  long long int b;

  cin>>a;
  cin>>b;

cout<<reverse( reverse(a)+reverse(b) )<<endl;
}

int main()
{
long long tc;
cin>>tc;

for(long long t=0;t<tc;t++)
fun();

    return 0;
}

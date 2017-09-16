#include <iostream>
#include <cstdlib>
#include <cstring>

/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/final-destination-cakewalk/ */

using namespace std;

int fun()
{
  char str[99999];
  cin>>str;
  long long len = strlen(str);
  char opt;
  long long x = 0 , y = 0 ; // starting at 0,0

  for(long long i = 0; i < len; i++)
  {
    opt = str[i];

    switch(opt)
    {
      case 'R': x = x + 1;
                break;
      case 'L': x = x - 1;
                break;
      case 'U': y = y + 1;
                break;
      case 'D': y = y - 1;
                break;
    }

  }
  cout<<x<<" "<<y;

}

int main()
{

fun();

  return 0;
}

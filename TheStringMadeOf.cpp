/* https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/what-is-the-string-made-of-2/ */

#include <stdio.h>
#include<string.h>

int main()
{
char digi[101];
int sum=0,i;
int len;
scanf("%s",digi);
len=strlen(digi);
for(i=0;i<len;i++)
{
if(digi[i]=='1')
{
sum=sum+2;
}
else if(digi[i]=='7')
{
sum=sum+3;
}
else if(digi[i]=='4')
{
sum=sum+4;
}
else if(digi[i]=='2'||digi[i]=='3'||digi[i]=='5')
{
sum=sum+5;
}
else if(digi[i]=='6'||digi[i]=='9'||digi[i]=='0')
{
sum=sum+6;
}
else if(digi[i]=='8')
{
sum=sum+7;
}
else
{
continue;
}
}

printf("%d",sum);


return 0;
}


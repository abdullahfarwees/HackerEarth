#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/mannas-first-name-4/ */

void fun()
{
	char str[151];
	int i;
	int full_cnt = 0 , half_cnt = 0;	
	
	scanf("%s",str);

for(i=0;i<strlen(str);i++)
{
if( (str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V' && str[i+3] == 'O' && str[i+4] == 'J' && str[i+5] == 'I' && str[i+6] == 'T' ) )
{
++full_cnt;
}
else if( (str[i] == 'S' && str[i+1] == 'U' && str[i+2] == 'V' && str[i+3] == 'O' ) )
{
++half_cnt;
}

}

printf("SUVO = %d",half_cnt);
printf(", SUVOJIT = %d\n",full_cnt);

	
}

int main()
{
	int tc,i;
	scanf("%d",&tc);
	
	for(i=0;i<tc;i++)
	fun();
	

    return 0;
}


#include <stdio.h>

int main()
{

int n, rev = 0, remainder;
printf("enter a number\n");
scanf("%d\n", &n);
rev=0;

while(n!=0)
{
	remainder= n%10;
	rev= rev*10 + remainder;
	n=n/10;
	
	
}
printf("the reverse number = %d", rev);
return 0;
}

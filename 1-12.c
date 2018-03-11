#include<stdio.h>
int main (void)
{
	int n1,n2;
	int sum;

	puts("2ko nyuryoku site");
	printf("1:");
	scanf("%d", &n1);
	printf("2:");
	scanf("%d", &n2);
	
	sum = n1 + n2;
	printf("sum = %d\n", sum);
	return(0);
}

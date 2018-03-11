#include<stdio.h>
int main(void){
	int p[10];
	int i;
	int count=0;

	for(i=0;i<=9;i++){
		scanf("%d",&p[i]);
		if(p[i]<=2){
			count++;
		}
	}
	printf("%d\n",count);
	return(0);
}


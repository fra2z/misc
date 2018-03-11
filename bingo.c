#include<stdio.h>
#include<stdlib.h>

int main(void)
{
        int num=0;
        int i=0,j=0;

	srand(time(NULL));
	printf("Start lottery...\n");
        for(i=0; i<5;i++){
		char ch = getc(stdin);
                num = rand()%75+1;
                printf("num=%02d\n",num);
        }
        return(0);
}


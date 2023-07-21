#include <stdio.h>

int main(){
	int num,i,fact=1;
	scanf("%d", &num);
    /*while(num!=0)
    {
        fact=fact*num;
        num--;
    }*/
    for(i=num;num!=0;num--)
    {
        fact=fact*num;
    }
	printf("%d",fact);
	     // Writing output to STDOUT
}


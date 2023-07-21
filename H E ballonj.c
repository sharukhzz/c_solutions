#include <stdio.h>

int main(){
	int num,sum=0,tot=0;
	scanf("%d",&num);
	int c1,c2,c3,c4,T1,T2,b1,b2,b3,b4;
	for(int i=0;i<num;i++)
    {
        scanf("%d %d",&c1,&c2);
        scanf("%d", &T1);
        for(int j=0;j<T1;j++)
        {
			scanf("%d %d",&b1,&b2);
            sum=sum+b1*c1+b2*c2;
           // scanf("%d %d",&b3,b4);
           // tot=tot+b3*c4+b4*c3;
		}
    printf("%d",sum);
     scanf("%d",&T2);
       for(int k=0;k<T2;k++)
        {
            scanf("%d %d",&b3,b4);
            tot=tot+b3*c4+b4*c3;
        }
    }
    printf("%d",tot);

}

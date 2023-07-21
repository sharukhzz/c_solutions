#include <stdio.h>

int main(void) {
    int T,x,y;
    {
        scanf("%d",&T);
        for(int i=0;i<T;i++)
        {
             scanf("%d %d",&x,&y);
        if(x>=y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        }
    }
	// your code goes here
	return 0;
}

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
    {
        int x,y;
        float s;
        scanf("%d %d",&x,&y);
        s=x*1.07;
        if(y<=s)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }

    }
	return 0;
}

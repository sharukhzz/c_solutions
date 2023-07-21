/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);
	int i;

	long data[N];
	for(auto i=0; i<N; i++)
	    scanf("%ld", &data[i]);
    while(1)
    {
        if(data[i]%10==0)
            printf("YES");
        else
            printf("NO");
        break;
        i++;
    }


    // write your code here
    // ans =
    //printf("%s", ans);

    return 0;
}

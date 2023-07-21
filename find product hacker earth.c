#include<stdio.h>
 int main()
 {
        int n;
        long long product = 1;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            product = product * a[i]%(1000000000+7);
        }
        printf("%lld\n", product);
        return 0;
}

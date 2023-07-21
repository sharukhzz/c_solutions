#include<stdio.h>
#include<string.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      char a[10];
      scanf("%s",a);
      int len;
      len =sizeof(a)/sizeof(a[0]);
      int count=0,s;
      for(s=0;s<len;s++)
      {
      if(a[s]=='a'||a[s]=='e'||a[s]=='i'||a[s]=='o'||a[s]=='u')
      {
          count++;
      }
      else
        count=0;
      if(count>2)
        break;
      }
      if(count>2)
        printf("HAPPY\n");
        else
        printf("SAD\n");

      }

       return 0;
   }

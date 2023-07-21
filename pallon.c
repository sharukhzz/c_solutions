#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[]={'a','b','a','a','b','c'};
int n=strlen(s);
printf("%d\n",n);
char pal[15];
int j=0;
for(int i=0;i<strlen(s);i++)
{
  pal[j]='#';
  pal[j+1]=s[i];
  j+=2;
}
//int k=strlen(s);
//pal[k+1]='#';
for(int i=0;i<strlen(pal);i++)
{
    printf("%c",pal[i]);
}
int a[strlen(pal)];
/*int count=0;
for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
{
  int l1=i;int l2=i;
  if(a[l1++] == a[l2--])
  {
    a[i++];
    l1++;
    l2--;
  }
}
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    printf("%d",a[i]);
}*/
    int length[15];
    int maxindex = 0;
    for(int i = 0;i < strlen(pal);i++)
    {
        length[i] = 0;
        for(int left = i-1,right = i+1; left >= 0 && right < strlen(pal);left--,right++)
        {
            if(pal[left] != pal[right])
                break;
            length[i]++;
        }
        if(length[maxindex] < lenght[i])
            maxindex = i;
    }

}

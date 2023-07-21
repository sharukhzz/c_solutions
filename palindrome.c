#include<stdio.h>
int main(){
   int i, rem, reverse_num, temp,n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=n;i<=m;i++){
      temp=i;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(i==reverse_num)
         printf("%d ",i);
   }
   return 0;
}

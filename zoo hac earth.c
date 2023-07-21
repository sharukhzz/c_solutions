#include<stdio.h>
int main()
{
	   char w[20]; int x=0,y=0;
	    scanf("%s",&w);
		 for (int i = 0; w[i] != '\0'; i++)
		  {
			   if (w[i]=='z')
			    {
					 x++;
				}
			    if(w[i]=='o')
				 {
					  y++;
				 }
		  }
				   if (y==x*2)
				    {
						 printf("Yes");
					}
				 else
				 {
					  printf("No");
				 }
				 return 0;
 }

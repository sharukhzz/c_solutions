#include<stdio.h>
#include<string.h>
int main()
{
 char b[3][4];
for(int i=0;i<3;i++)
 {
     for(int j=0;j<4;j++)
     {
         scanf("%c\n",&b[i][j]);
     }
     }
     char w[100];
 gets(w);
 int flag=0;
 for(int k=0;k<strlen(w)-1;k++){
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<4;j++)
     {
         if(w[k]==b[i][j])
         {
             if((j==3)&&((b[i+1][j])==w[k+1]||(b[i][j-1])==w[k+1]))
             {
                 flag=1;
                 if(b[i+1][j]==w[k+1]){
                i=i+1;
                 }
                 if(b[i][j-1]==w[k+1])
                 {
            j=j-1;
                 }
             }
            else if(b[i][j+1]==w[k+1]||b[i+1][j+1]==w[k+1]||b[i+1][j]==w[k+1])
            {
            flag =1;
            if(b[i][j+1]==w[k+1])
            {
            j=j+1;
            }
            if(b[i+1][j+1]==w[k+1])
            {
            i=i+1;
            }
            if(b[i+1][j]==w[k+1])
            {
            i=i+1;
            }
            }

            break;

    }
    else
    {
        flag =0;
        break;
    }
     }

}
 }
 if(flag==1)
 {
printf("True");
 }
 else
    {
       printf("False");

    }
/*
A
B
C
E
S
F
C
S
A
D
E
E
*/

}

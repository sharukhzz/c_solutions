#include<stdio.h>
int main()
{
char str[]="i love sharuk";
char *word;
word=strtok(str," ");
while(word != NULL)
{
    printf("%s",word);
    word=strtok(NULL," ");
}
}

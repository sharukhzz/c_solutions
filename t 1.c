#include <stdio.h>
#include <stdlib.h>
int OperationsBinaryString(char str[100], int len)
{
    char word[2];
    int next;
    word[0] = str[0];
    word[1] = '\0';
    int res = atoi(word);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A')
        {
            word[0] = str[0];
            word[1] = '\0';
            next = atoi(word);
            res = res && next;
        }
        else if (str[i] == 'B')
        {
            word[0] = str[0];
            word[1] = '\0';
            next = atoi(word);
            res = res || next;
        }
        else
        {
            word[0] = str[0];
            word[1] = '\0';
            next = atoi(word);
            res = res ^ next;
        }
        i++;
    }
    return res;
}
void main()
{
    char str[100];
    gets(str);
    int len;
    for (len = 0; str[len] != '\0'; len++);

    int res = OperationsBinaryString(str, len);
    printf("%d",res);
}

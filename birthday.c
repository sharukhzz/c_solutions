#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node* next;
}*head, *next, *temp, *newnode, *temp2;


void display(){
    temp = head;
    while(temp != NULL){
        printf("%c", temp->data);
        temp = temp->next;
    }
}

void stringy(){
    temp = head;
    int flag = 0;
      //printf("%c",temp->next->data);
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
                flag = 1;
                temp2 = temp->next;
               // printf("%c",temp2->data);
                while(temp2!=NULL){
                    if(temp->next->data != temp2->data)
                    {
                        char t = temp->next->data;
                        temp->next->data = temp2->data;
                        temp2->data = t;
                        flag = 0;
                        //printf("%c ", temp2->data);
                        break;
                    }
                    temp2 = temp2->next;
                }
            //printf("%c ", temp->next->data);
        }
        temp = temp->next;
    }
    if(flag == 0){
        display();
    }else{
        printf("\n-1");
    }
}
int main(){
    char str[100];
    gets(str);
    int len = strlen(str);

    head = NULL;
    for(int i=0; i<len; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = str[i];
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }

    stringy();
}

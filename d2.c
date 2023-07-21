    #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
   int data;
   struct node*next;
 };
 struct node*head,*tail,*temp,*newn,*temp1,*temp2;
 int main()
 {
   int val,n ;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     newn=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&val);
     newn->data=val;
     newn->next=NULL;
     if(head==NULL)
     {
       head=newn;
       tail=newn;
       tail->next=head;
     }
     else
     {
       tail->next=newn;
       tail=newn;
       tail->next=head;
     }
   }
  /* int c;
  c=n/2+1;
    int a[c];
   int b[c-1];*/
   temp1=head;
   temp2=head;
   while(temp2->next!=NULL || temp2==NULL )
   {
     temp1=temp1->next;
     temp2=temp2->next->next;
     printf("%d",temp1->data);
    // printf("%d",temp2->data);
   }
    else if(temp2 == NULL)
    {
     temp1=temp->data;
     temp2=temp2->next->next;
     printf("%d",temp1->data);
   }
  /* printf("List 1: ");
   for(int i=0;i<c;i++)
   {
     printf("%d ",a[i]);
   }
   printf("\n");
   printf("List 2: ");
   for(int i=0;i<c-1;i++)
   {
     printf("%d ",b[i]);
   }*/
 }

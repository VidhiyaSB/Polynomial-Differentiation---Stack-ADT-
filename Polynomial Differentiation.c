//Code by Vidhiya S B
#include<stdio.h>
#include<stdlib.h>
struct poly{
    int c;
    int p;
    struct poly *next;
};
struct poly *h=NULL;
int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=n;i>=0;i--)
   {
       struct poly *newnode=malloc(sizeof(struct poly));
       struct poly *ptr;
       newnode->next=NULL;
       newnode->p=i;
       scanf("%d",&newnode->c);
       if(h==NULL)
        h=newnode;
       else
       {
         ptr=h;
         while(ptr->next!=NULL)
           ptr=ptr->next;
         ptr->next=newnode;
       }
   }
   struct poly *ptr;
   ptr=h;
   do
   {
     ptr->c=(ptr->p)*(ptr->c);
     ptr->p=(ptr->p)-1;
     printf("%dx^%d ",ptr->c,ptr->p);
     if(ptr->p!=0)
      printf("+ ");
     ptr=ptr->next;
   }
   while(ptr->next!=NULL);
}

#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
int main()
{
    int n;
    
    struct node*start= NULL,*p=NULL,*p1=NULL;
    char k;
    start =(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d", &(start->data));
    start->next=NULL;
    p=start;
    do
    {
        p1=(struct node*)malloc(sizeof(struct node));
        printf("enter data  ");
        scanf("%d",&(p1->data));
        p1->next = NULL;
        p->next =p1 ;
        p=p1;
        getchar();
        printf("want to add more ");
        scanf("%c",&k);
    }while(k=='y');
    printf("enter the element to be inserted");
    scanf("%d",&n);
    p1 =(struct node*)malloc(sizeof(struct node));
    p1->data=n;
    p1->next=start;

    start=p1;
    p=start;
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
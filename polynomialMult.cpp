#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coef;
    int po;
    struct node *next;
};
struct node *create()
{
    int c, k;
    struct node *start = NULL, *p = NULL, *p1 = NULL;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter highest power: ");
    scanf("%d", &k);
    printf("Enter coefficient: ");
    scanf("%d", &c);
    start->coef = c;
    start->po = k;
    start->next = NULL;
    p = start;
    for (int i = k - 1; i >= 0; i--)
    {
        printf("Enter coefficient for power %d ", i);
        printf("Enter coefficient: ");
        scanf("%d", &c);
        if (c != 0)
        {
            p1 = (struct node *)malloc(sizeof(struct node));
            p1->coef = c;
            p1->po = i;
            p1->next = NULL;
            p->next = p1;
            p = p->next;
        }
    }
    return start;
}
void display(struct node *s3)
{
    printf("\n"); 
    struct node *p = s3;
    while (p != NULL)
    {
        printf("%d %d  ", p->coef, p->po);
        p = p->next;
    }
}

struct node *mul(struct node *k1, struct node *k2)
{
    struct node *p1 = NULL, *p2 = NULL, *p3 = NULL, *p = NULL, *k3 = NULL, *t = NULL;
    p1 = k1;
    p2 = k2;
    p3 = (struct node *)malloc(sizeof(struct node));
    k3 = p3;
    while (p1 != NULL)
    {
        while (p2 != NULL)
        {
            p3->po = p1->po + p2->po;
            p3->coef = p1->coef * p2->coef;
            p3->next=NULL;
            p2 = p2->next;
            if (p2 != NULL || p2 !=NULL)
            {
                p = (struct node *)malloc(sizeof(struct node));
                p3->next = p;
                p->next = NULL;
                p3=p;
            }
        }
        p2=k2;
        p1 = p1->next;
    }
    
    p3 = k3;
    while (p3 != NULL)
    {
        t = p3;
        while (t->next != NULL)
        {
            p=t;
            t=t->next;
            if (p3->po == t->po)
            {
            
                p3->coef = p3->coef + t->coef;
                p->next = t->next;
                free(t);
                t=p->next;
            }
            else
            {
                p = t;
                t = t->next;
            }
        }
        p3 = p3->next;
       
    }
  return k3;   
}
int main()
{
    struct node *s1, *s2, *s3, *p;
    s1 = create();
    printf("second polynomial\n");
    s2 = create();
     printf("First polynomial\n");
    display(s1);
     printf("\nsecond polynomial\n");
    display(s2);
    s3 = mul(s1, s2);
     printf("\nMultiplication\n");
    display(s3);
    return 0;
}
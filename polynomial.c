#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coef;
    int po;
    struct node *next;
};
struct node* create()
{
    int c,p;
    struct node *start = NULL, *p = NULL, *p1 = NULL;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter highest power: ");
    scanf("%d", &p);
    printf("Enter coefficient: ");
    scanf("%d", &c);
    start->coef = c;
    start->po = p;
    start->next = NULL;
    for (int i = p - 1; i >= 0; i--)
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
        }
    }
    return start;
}
struct 
int main()
{
    struct node * s1;
    s1=create();
    s2=create();
}

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* create()
{
    struct node *start=NULL,*p = NULL, *p1 = NULL;
    char k;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &(start->data));
    start->next = NULL;
    p = start;
    do
    {
        p1 = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &(p1->data));
        p1->next = NULL;
        p->next = p1;
        p = p1;
        getchar();
        printf("Want to add more? ");
        scanf("%c", &k);

    } while (k == 'y');
    return start;
}
int main()
{

    struct node *s1 = NULL, *s2 = NULL,*p;
    s1=create();
    printf("\n in Main Linked List :  ");
    p=s1;
    while (p != NULL)

    {
        printf("%d ", p->data);
        p = p->next;
    }
}
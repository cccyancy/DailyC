#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *createLinkedlist(int n)
{
    node *head = NULL;
    node *p = NULL;
    node *temp = NULL;

    for (int i = 0; i < n; i++)
    {
        node *temp = (node *)malloc(sizeof(node *));
        int v = 0;
        printf("what value do you want for node %d:", i + 1);
        scanf("%d", &v);

        temp->data = v;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

void display(node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
}

int main()
{
    int n = 0;
    node *HEAD;

    printf("how many node do you want?\n");
    scanf("%d", &n);

    HEAD = createLinkedlist(n);
    display(HEAD);

    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

bool hasCycle(Node *head)
{
    if (!head || !head->next)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (slow != fast)
    {
        if (!fast || !fast->next)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}

int main()
{
    int A[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    create(A, 10);

    cout << "The Linked List for Display Function is: ";
    display(first);
    cout << endl;

    cout << "Has Cycle: ";
    printf("%d", hasCycle(first));

    return 0;
}

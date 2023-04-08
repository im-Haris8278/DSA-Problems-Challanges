#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoList(ListNode *l1, ListNode *l2)
{
    ListNode *mergedList = new ListNode(0);
    ListNode *tail = mergedList;

    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL)
    {
        tail->next = l1;
    }
    else
    {
        tail->next = l2;
    }

    return mergedList->next;
}

int main()
{
    ListNode *l1 = new ListNode(0);
    l1->next = new ListNode(1);
    l1->next->next = new ListNode(2);

    ListNode *l2 = new ListNode(3);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(5);

    ListNode *mergedList = mergeTwoList(l1, l2);

    while (mergedList != NULL)
    {
        cout << mergedList->val << endl;
        mergedList = mergedList->next;
    }

    return 0;
}
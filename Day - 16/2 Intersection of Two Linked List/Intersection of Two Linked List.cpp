#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    int length(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int lenA = length(headA);
        int lenB = length(headB);

        while (lenA > lenB)
        {
            headA = headA->next;
            lenA--;
        }

        while (lenB > lenA)
        {
            headB = headB->next;
            lenB--;
        }

        while (headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};

int main()
{
	Solution S;
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = new ListNode(8);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next = new ListNode(8);
    headB->next->next->next = new ListNode(4);
    headB->next->next->next->next = new ListNode(5);

    ListNode *intersectedList = S.getIntersectionNode(headA, headB);

    while (intersectedList != NULL)
    {
        cout << intersectedList->val << endl;
        intersectedList = intersectedList->next;
    }

    return 0;
}

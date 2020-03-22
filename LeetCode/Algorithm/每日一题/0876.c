/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head){
    int count = 0;
    struct ListNode* p;
    p = head;
    while(p)
    {
        count++;
        p = p->next;
    }
//    printf("%d\n",count);
    if(count==1)    //边界值条件特殊情况
    {
        return head;
    }
    
    int js = 0;
    if(count%2!=0)
    {
        js = (count-1)/2;
    }
    else if(count%2==0)
    {
        js = count/2;
    }

    p = head;
    while(p)
    {
        p = p->next;
        js--;
        if(js==0)
        {
            return p;
        }
    }
    return NULL;
}
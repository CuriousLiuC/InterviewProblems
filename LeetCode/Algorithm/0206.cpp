#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring> 


//Definition for singly-linked list.
struct ListNode {
     int val;
     struct ListNode *next;
};


//��ת����Ļ���˼�룺��¼��һ�ڵ�+ͷ�巨 
struct ListNode* reverseList(struct ListNode* head){
   
    struct ListNode *p = head;
    struct ListNode *returnlist = NULL;
    while(head)
    {
        p = head->next;
        head->next = NULL;
        if(!returnlist)
        {
            returnlist = head;
        }
        else
        {
            head->next = returnlist;
            returnlist = head;
        }

        head = p;//�ӻ�����p��һ���ݴ� �ؼ�����p���ݴ���·
    }
    return returnlist;
}
 
 
int main(void)
{
	struct ListNode *a;
	a = (struct ListNode  *)malloc(sizeof(struct ListNode));
	a = NULL;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		//�����һ��temp�� 
		int  temp;
		scanf("%d",&temp);
		struct ListNode *tt;
		tt =  (struct ListNode  *)malloc(sizeof(struct ListNode));
		tt->val = temp;
		tt->next = NULL;
		
		//β�巨 
		if(!a)
		{
			a = tt;
			a->next = NULL;
		}
		else
		{
			struct ListNode *p = a;
			while(p->next)
			{
				p = p->next;
			} 
			p->next = tt;
		}
	}
	
	struct ListNode *final = NULL;
	final = reverseList(a);
	
	while(final)
	{
		printf("%d\t",final->val);
		final = final->next;
	}
	
	
	
} 

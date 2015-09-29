#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
using namespace std;   

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
	// Alg. 1
	ListNode *pre=NULL;
	ListNode *cur=head;
	while(cur!=NULL)
	{
		ListNode *next=cur->next;
		cur->next=pre;
		pre=cur;
		cur=next;
	}
	return pre;

	// Alg. 2
	if(head->next==NULL)
		return head;
	ListNode* newHead=reverseList(head->next);
	ListNode* tmp=head->next;
	head->next=NULL;
	tmp->next=head;
	return newHead;
}
int main()
{
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);
	ListNode e(5);
	ListNode f(6);
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=&e;
	e.next=&f;
	cout<<reverseList(&a)<<endl;
	return 0;
}

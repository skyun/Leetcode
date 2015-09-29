#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
#include <string>
#include <utility>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 ListNode* removeElements(ListNode* head, int val) {
	 ListNode* pre,*p;
	 pre=p=head;
	 while(p)
	 {
		 if(p->val==val)
		 {
			 if(p==head)
				pre=head=p->next;
			 else
				 pre->next=p->next;
			 free(p);
			 p=p->next;
		 }
		 else
		 {
			 pre=p;
			 p=p->next;
		 }
	 }

	 return head;
 }

int main()
{
	ListNode head(1);
	ListNode a(1);
	head.next=&a;
	int val=1;
	removeElements(&head,val);
	return 0;
}

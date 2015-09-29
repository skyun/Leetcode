#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head,int n) {
	ListNode *p=head,*q=head;
	while(n--) q=q->next;
	if(q==NULL) return head->next;
	else q=q->next;
	while(q){
		p=p->next;
		q=q->next;
	}
	vector<int> v;
	v.
	p->next=p->next->next;
	return head;
}
int main()
{
	ListNode a1(1);
	ListNode a2(2);
	a1.next=&a2;
	ListNode *resList=removeNthFromEnd(&a1,1);
	while(resList!=NULL)
	{
		cout<<resList->val<<endl;
		resList=resList->next;
	}
	system("pause");
}

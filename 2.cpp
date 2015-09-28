#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	// 如果其中一个为0，则直接返回
	if(l1==NULL) return l2;
	if(l2==NULL) return l1;

	ListNode *resList=NULL,*pNode=NULL,*pNext=NULL;
	int tmpRes=0;
	int isFull=0;

	// 有可能其中一个过长
	while(l1 || l2)
	{
		int a=0,b=0;
		if(l1!=NULL) 
		{
			a=l1->val;
			l1=l1->next;
		}
		if(l2!=NULL)
		{
			b=l2->val;
			l2=l2->next;
		}
		tmpRes=(a+b+isFull);
		isFull=tmpRes/10;
		pNext=new ListNode(tmpRes%10);
		if(resList==NULL)
		{
			resList=pNode=pNext;
		}else{
			pNode->next=pNext;
			pNode=pNext;
		}
	}
	// 如果最高位还有进位，则还需要新建结点
	if(isFull>0)
	{
		pNext=new ListNode(isFull);
		pNode->next=pNext;
	}
	return resList;
}
int main()
{
	ListNode a1(2);
	ListNode a2(4);
	ListNode a3(3);
	ListNode b1(5);
	ListNode b2(6);
	ListNode b3(4);
	a1.next=&a2;
	a2.next=&a3;
	b1.next=&b2;
	b2.next=&b3;
	ListNode *resList=addTwoNumbers(&a1,&b1);
	while(resList!=NULL)
	{
		cout<<resList->val<<endl;
		resList=resList->next;
	}
	system("pause");
}

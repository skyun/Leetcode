#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *newlist,*p=l1,*pnext,*q=l2,*qnext,*r;
        if(l1->val>=l2->val) {
            newlist=l1;
            p=l1->next;
            if(p!=NULL) pnext=p->next;
        }else{
            newlist=l2;
            q=l2->next;
            if(q!=NULL) qnext=q->next;
        }
        r=newlist;
        while(!(p==NULL || q==NULL)){
            if(p->val<=q->val){
                r->next=p;
                r=r->next;
                p=p->next;
                if(p!=NULL) pnext=p->next;
            }else{
                r->next=q;
                r=r->next;
                q=q->next;
                if(q!=NULL) qnext=q->next;
            }
        }
        if(p==NULL){
            while(q){
                r->next=q;
                r=r->next;
                q=q->next;
                if(q!=NULL) qnext=q->next;
            }
        }else{
            while(p){
                r->next=p;
                r=r->next;
                p=p->next;
                if(p!=NULL) pnext=p->next;
            }
        }
        r->next=NULL;
        return newlist;
    }

int main()
{
	int a[]={-3,0,1,2};
	ListNode *l1,*l2;
	mergeTwoLists(l1,l2);
	system("pause");
}

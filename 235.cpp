#include "TreeUtil.h"
#include <algorithm>
#include <math.h>
using namespace std; 
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if(root==NULL) return root;
	if(root==p || root ==q) return root;

	if(max(p->val,q->val)<root->val)
		return lowestCommonAncestor(root->left,p,q);
	else if(min(p->val,q->val)>root->val)
		return lowestCommonAncestor(root->right,p,q);
	else return root;
}
int main()
{
	char treeValue[]={'6','2','8','0','4','7','9','#','#','3','5'};
	TreeNode *root1=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	TreeNode *p=root1->left;
	TreeNode *q=root1->left->right->left;

	cout<<lowestCommonAncestor(root1,p,q)->val<<endl;
	return 0;
}

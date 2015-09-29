#include "TreeUtil.h"
#include <algorithm>
using namespace std;

bool compTree(TreeNode* lroot,TreeNode* rroot)
{
	if(lroot==NULL) return (rroot==NULL);
	if(rroot==NULL) return false;
	if(lroot->val!=rroot->val) return false;
	return (compTree(lroot->left,rroot->right) &&compTree(lroot->right,rroot->left));
}
bool isSymmetric(TreeNode* root) {
	if(root==NULL) return true;
	return compTree(root->left,root->right);
}

int main()
{
	char treeValue[]={'1','2','3','#','#','4','#','#','5'};
	TreeNode *root=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	prePrint(root);
	cout<<isSymmetric(root)<<endl;
	return 0;
}

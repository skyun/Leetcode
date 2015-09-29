#include "TreeUtil.h"
#include <algorithm>
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q) {
	if(p==NULL) return (NULL==q);
	if(q==NULL) return false;
	if(p->val!=q->val) return false;
	return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}
int main()
{
	char treeValue[]={'1','2','3','#','#','4','#','#','5'};
	TreeNode *root1=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	TreeNode *root2=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	cout<<isSameTree(root1,root2)<<endl;
	return 0;
}

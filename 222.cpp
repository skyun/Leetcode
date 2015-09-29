#include "TreeUtil.h"
#include <algorithm>
#include <math.h>
using namespace std; 
int getLeftLevel(TreeNode* root)
{
	int count=1;
	while(root->left){
		root=root->left;
		++count;
	}
	return count;
}
int getRightLevel(TreeNode* root)
{
	int count=1;
	while(root->right){
		root=root->right;
		++count;
	}
	return count;
}
int countNodes(TreeNode* root) {
	if(root==NULL) return 0;
	int lcount=getLeftLevel(root);
	int rcount=getRightLevel(root);
	if(lcount==rcount)
		return (2<<(lcount-1))-1;
	else
		return 1+countNodes(root->left)+countNodes(root->right);
}
int main()
{
	//char treeValue[]={'6','2','8','0','4','7','9','#','#','3','5'};
	char treeValue[]={'6'};
	TreeNode *root1=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	cout<<countNodes(root1)<<endl;
	return 0;
}

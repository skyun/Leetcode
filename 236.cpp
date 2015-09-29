#include "TreeUtil.h"
#include <algorithm>
using namespace std; 
bool getPath(TreeNode *root,TreeNode *t,vector<TreeNode*> path)
{
	if(root==t) return true;
	if(root->left){
		path.push_back(root->left);
		if(getPath(root->left,t,path)) return true;
		path.pop_back();
	}
	if(root->right){
		path.push_back(root->right);
		if(getPath(root->right,t,path)) return true;
		path.pop_back();
	}
	return false;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	vector<TreeNode *> pPath,qPath;
	cout<<getPath(root,p,pPath)<<endl;
	cout<<getPath(root,q,qPath)<<endl;
	TreeNode* res=root;
	for(int i=0;i<pPath.size() && i<qPath.size();++i)
	{
		if(pPath[i]==qPath[i]) res=pPath[i];
		else break;
	}
	return res;
}
int main()
{
	char treeValue[]={'3','5','1','6','2','0','8','#','#','7','4'};
	TreeNode *root1=CreatTree(treeValue,sizeof(treeValue)/sizeof(char));
	TreeNode *p=root1->left;
	TreeNode *q=root1->left->right->left;

	cout<<lowestCommonAncestor(root1,p,q)->val<<endl;
	return 0;
}

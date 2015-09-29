#include <vector>
#include <iostream>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* CreatTree(char treeValue[],int count)
{
	vector<TreeNode*> vNode;
	if(count==0) return 0;
	TreeNode *T=new TreeNode(treeValue[0]-'0');
	vNode.push_back(T);
	for(int i=1;i<count;)
	{
		TreeNode *tmpNode=vNode[0];
		if(treeValue[i]!='#')
		{
			TreeNode *newNode=new TreeNode(treeValue[i]-'0');
			vNode.push_back(newNode);
			tmpNode->left=newNode;
		}
		++i;
		if(treeValue[i]!='#')
		{
			TreeNode *newNode=new TreeNode(treeValue[i]-'0');
			vNode.push_back(newNode);
			tmpNode->right=newNode;
		}
		++i;
		vNode.erase(vNode.begin());
	}
	return T;
}
int CreatTree2(TreeNode *T)
{
	char value;
	cin>>value;
	if(value=='#')
		T=NULL;
	else{
		T=new TreeNode(value-'0');		
		CreatTree2(T->left);
		CreatTree2(T->right);
	}
	return 0;
}
// 先序遍历打印
void prePrint(TreeNode *T)
{
	if(T==NULL) return;
	printf("%d ",T->val);
	prePrint(T->left);
	prePrint(T->right);
}
// 中序遍历打印
void midPrint(TreeNode *T)
{
	if(T==NULL) return;
	prePrint(T->left);
	printf("%d ",T->val);
	prePrint(T->right);
}
// 后序遍历打印
void lastPrint(TreeNode *T)
{
	if(T==NULL) return;
	prePrint(T->left);
	prePrint(T->right);
	printf("%d ",T->val);
}

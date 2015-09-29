#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


    TreeNode* invertTree(TreeNode* root) {
		TreeNode *tmpTNode;
		if(root==NULL)
			return root;
		else
		{
			tmpTNode=root->left;
			root->left=invertTree(root->right);
			root->right=invertTree(tmpTNode);
		}
    }

int main()
{
	TreeNode n1(4);
	TreeNode n2(2);
	TreeNode n3(7);
	TreeNode n4(1);
	TreeNode n5(3);
	TreeNode n6(6);
	TreeNode n7(9);

	n1.left=&n2;
	n1.right=&n3;
	n2.left=&n4;
	n2.right=&n5;
	n3.left=&n6;
	n3.right=&n7;
	
	invertTree(&n1);
	cout<<n1.val<<" "<<n2.val<<" "<<n3.val<<" "<<n4.val<<" "<<n5.val<<" "<<n6.val<<" "<<n7.val<<endl;
	return 0;
}

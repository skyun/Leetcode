#include <algorithm>//sort()函数的头文件
#include <iostream>
#include <stdio.h>
#include <vector>
#define uint32_t unsigned int
using std::vector;

vector<vector<int> > subsets(vector<int> &S) {
	vector<vector<int>> result;
	int n=S.size();
	int max_num=1<<n;
	for(int i=0;i<max_num;i++)
	{
		vector<int> tmp;
		int j,k;
		for(j=i,k=0;j>0;j=j>>1,k++)
		{
			if(j%2)
			{
				tmp.push_back(S[k]);
			}
		}

		sort(tmp.begin(),tmp.end());
		result.push_back(tmp);
	}
	return result;
}

int main()
{
	int nums[3]={4,1,0};
	size_t counts=sizeof(nums)/sizeof(int);
	vector<int> S(nums,nums+counts);
	subsets(S);
	return 0;
}

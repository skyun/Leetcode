//http://blog.csdn.net/ljiabin/article/details/40620579
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<vector<int> > threeSum(vector<int> &num) {
	// IMPORTANT: Please reset any member data you declared, as
	// the same Solution instance will be reused for each test case.
	vector<vector<int>> result;
	vector<int> tmp;
	int sz = num.size();
	sort(num.begin(), num.end());
	for (int i=0; i<sz; i++) {
		if (i && num[i] == num[i-1]) continue;
		for (int j=i+1, k=sz-1; j<k; j++) {
			if (j > i+1 && num[j]==num[j-1]) continue;
			while(k>j && num[i]+num[j]+num[k] > 0) k--;
			if (k>j && num[i] + num[j] + num[k] == 0) {
				tmp[0]=num[i];
				tmp[1]=num[j];
				tmp[2]=num[k];
				result.push_back(tmp);
			}
		}
	}
	return result;
}

int main()
{
	int a[]={-1,0,1,2,-1,-4};
	vector<int> nums(a,a+6);
	vector< vector<int> > res=threeSum(nums);
	system("pause");
}

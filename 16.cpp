#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
	int minTarget=INT_MAX,res=INT_MAX;
	int sz = nums.size();
	sort(nums.begin(), nums.end());
	for (int i=0; i<sz-2; i++) {
		for (int j=i+1, k=sz-1; j<k;) {
			int sum=nums[i]+nums[j]+nums[k];
			if(sum==target)
				return sum;
			if(abs(sum-target)<minTarget){
				res=sum;
				minTarget=abs(sum-target);
			}
			if(sum<target) ++j;
			else --k;
		}
	}
	return res;
}

int main()
{
	int a[]={-3,0,1,2};
	vector<int> nums(a,a+4);
	cout<<threeSumClosest(nums,1)<<endl;
	system("pause");
}

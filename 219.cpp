#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
using namespace std;   
bool containsNearbyDuplicate(vector<int>& nums, int k) {
	map<int,int> buffer;
	for(int i=0;i<nums.size();i++)
	{
		if(buffer.find(nums[i])!=buffer.end() && i-buffer[nums[i]]<=k)
			return true;
		else
			buffer[nums[i]]=i;
	}
	return false;
}

int main()
{
	int a[]={1,2,1,2,4,3};
	int k=3;
	vector<int> nums(a,a+sizeof(a)/sizeof(int));
	cout<<containsNearbyDuplicate(nums,k)<<endl;
	return 0;
}

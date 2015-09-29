#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
using namespace std;   
    bool containsDuplicate(vector<int>& nums) {
		map<int,int> buf;
		for(int i =0;i<nums.size();i++)
		{
			if(buf.find(nums[i])!=buf.end())
				return true;
			else
				buf[nums[i]]=1;
		}
		return false;
    }

int main()
{
	int a[]={1,2,1,2,4,3};
	int k=3;
	vector<int> nums(a,a+sizeof(a)/sizeof(int));
	cout<<containsDuplicate(nums)<<endl;
	return 0;
}

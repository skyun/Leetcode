#include <algorithm>//sort()
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#define uint32_t unsigned int
using std::vector;
#define max(x,y) 
int rob(vector<int> &num) {

	int result1=0,result2=0;
	for(int i=0;i<num.size();i++)
	{
		int tmp=result1;
		result1=result1>result2?result1:result2;
		result2=tmp+num[i];
	}
	return result1>result2?result1:result2;
}

int main()
{
	int nums[9]={1,2,3,4,5,6,7,8,9};
	size_t counts=sizeof(nums)/sizeof(int);
	vector<int> S(nums,nums+counts);
	int x=rob(S);
    std::cout<<x<<std::endl;
	return 0;
}

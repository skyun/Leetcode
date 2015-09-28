#include <iostream>
#include <stdio.h>
#include <vector>
#define uint32_t unsigned int
using std::vector;
int maxProfit(int k, vector<int> &prices)
{
	if(prices.empty() || k==0)
		return 0;
	if(k > prices.size())
		return maxProfit2(prices);
	int totalPro=0;
	for(int i=1;i<prices.size();i++)
	{

	}

}

int maxProfit2(vector<int> &prices)
{
	int totalPro=0;
	for(int i=1;i<prices.size();i++)
	{
		if(prices[i]>prices[i-1])
			totalPro+=(prices[i]-prices[i-1]);
	}
	return totalPro;
}
int main()
{
	int n=13;
	int nums[13]={3,2,5,9,5,6,5,8,5,5,11,18,13};
	size_t counts=sizeof(nums)/sizeof(int);
	int k=3;
	vector<int> prices(nums,nums+counts);


	maxProfit(k,prices);
	for(int i=0;i<n;i++)
		std::cout<<nums[i]<<std::endl;

	return 0;
}

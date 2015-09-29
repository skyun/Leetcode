#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
#include <string>
#include <utility>
#include <unordered_set>
using namespace std;
bool isHappy(int n) {
	/*if(n<1) return false;
	vector<int> vec;
	vector<int>::iterator iter;
	while(1)
	{
		iter=find(vec.begin(),vec.end(),n);
		if(iter!=vec.end())
			return false;
		vec.push_back(n);
		int sum=0;
		while(n!=0)
		{
			sum+=(n%10)*(n%10);
			n/=10;
		}
		if(sum==1)
			return true;
		n=sum;
	}*/
	if(n<1) return false;
	unordered_set<int> nums;
	
	while(true)
	{
		if(nums.find(n)!=nums.end())
			return false;
		nums.insert(n);
		int sum=0;
		while(n)
		{
			sum+=(n%10)*(n%10);
			n/=10;
		}
		if(sum==1) return true;
		n=sum;
	}

}

int main()
{
	cout<<isHappy(19)<<endl;
	return 0;
}

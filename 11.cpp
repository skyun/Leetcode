#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
int maxArea(vector<int>& height) {
	int res=0;
	int i=0,j=height.size()-1;
	while(i<j)
	{
		int area=(j-i)*(height[i]<height[j]?height[i]:height[j]);
		res=res>area?res:area;
		if(height[i]<height[j]) i++;
		else j--;
	}
	return res;
}
int main()
{
	int h[]={4,6,2,6,7,11,2};
	vector<int> height(h,h+7);
	cout<<maxArea(height)<<endl;
	return 0;
}

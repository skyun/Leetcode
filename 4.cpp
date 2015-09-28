// https://leetcode.com/problems/median-of-two-sorted-arrays/
// 解析：http://blog.csdn.net/yutianzuijin/article/details/11499917/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findKthSortedArray(vector<int>& nums1, vector<int>& nums2,int m1,int m2,int n1,int n2,int k)
{
	if(m2-m1==0) return nums2[k-1];
	if(n2-n1==0) return nums1[k-1];
	if(k==1) return nums1[m1]>nums2[n1]?nums2[n1]:nums1[m1];
	if(m2-m1>n2-n1) return findKthSortedArray(nums2,nums1,n1,n2,m1,m2,k);
	int pa=k/2>(m2-m1)?(m2-m1):k/2;
	int pb=k-pa;
	if(nums1[m1+pa-1]>nums2[n1+pb-1])
		return findKthSortedArray(nums1,nums2,m1,m2,n1+pb,n2,k-pb);
	else if(nums1[m1+pa-1]<nums2[n1+pb-1])
		return findKthSortedArray(nums1,nums2,m1+pa,m2,n1,n2,k-pa);
	else
		return nums1[pa-1];

}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	int m=nums1.size(),n=nums2.size();
	int k=(m+n)/2;
	if((m+n)%2)
		return findKthSortedArray(nums1,nums2,0,m,0,n,k+1);
	else
		return (findKthSortedArray(nums1,nums2,0,m,0,n,k)+findKthSortedArray(nums1,nums2,0,m,0,n,k+1))/2.0;
}
int main()
{
	int arr1[]={1,2};
	int arr2[]={1,2};
	vector<int> nums1(arr1,arr1+2);
	vector<int> nums2(arr2,arr2+2);
	cout<<findMedianSortedArrays(nums1,nums2)<<endl;
	return 0;
}

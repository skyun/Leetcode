#include <iostream>
#include <stdio.h>
#define uint32_t unsigned int

void rotate(int nums[], int n, int k) {
	int i=0,j=0;
	int tmp=0;
	for(i=0;i<k;i++)
	{
		tmp=nums[n-1];
		for(j=n-1;j>=0;j--)
			nums[j]=nums[j-1];
		nums[0]=tmp;
	}
}
void rotate2(int nums[], int n, int k) {
	int *p = new int[n];
	memcpy(p,nums,n*sizeof(int));
	memcpy(nums,p+(n-k%n),(k%n)*sizeof(int));
	memcpy(nums+(k%n),p,(n-k%n)*sizeof(int));
	delete[] p;
}
int main()
{
	int n=13;
	int nums[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int k=17;
	rotate2(nums,n,k);
	for(int i=0;i<n;i++)
		std::cout<<nums[i]<<std::endl;

	return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int nthUglyNumber(int n) {
	if(n<1) return -1;
	int *ugly=new int[n];
	memset(ugly,0,sizeof(int)*n);
	int factor2=2,factor3=3,factor5=5;
	int index2=0,index3=0,index5=0;
	ugly[0]=1;
	for(int i=1;i<n;++i)
	{
		int minNum=factor2>factor3?factor3:factor2;
		minNum=minNum>factor5?factor5:minNum;
		ugly[i]=minNum;
		if(minNum==factor2)
			factor2=2*ugly[++index2];
		if(minNum==factor3)
			factor3=3*ugly[++index3];
		if(minNum==factor5)
			factor5=5*ugly[++index5];
	}
	return ugly[n-1];
}
int main()
{
	cout<<nthUglyNumber(9)<<",";
}

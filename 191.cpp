#include <iostream>
#include <stdio.h>

int hammingWeight(int n) 
{
		int count=0;
		while(n!=0)
		{
			if(n & 1)
				count++;
			n>>=1;
		}
	return count;
}

int main()
{
	int a=0;
	while(scanf("%d",&a)!=EOF)
	{
		std::cout<<hammingWeight(a)<<std::endl;
	}
	return 0;
}

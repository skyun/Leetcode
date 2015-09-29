#include <iostream>
#include <stdio.h>
#define uint32_t unsigned int
uint32_t reverseBits(uint32_t n) 
{
	uint32_t b=0;
	int m=32;
	while(m--)
	{
		if(n & 1)
		{
			b<<=1;
			b|=1;
		}
		else
		{
			b<<=1;
		}
		n>>=1;
	}
	return b;
}

int main()
{
	uint32_t a=43261596 ;
	std::cout<<reverseBits(a)<<std::endl;
	return 0;
}

#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

bool isPalindrome(int x) {
	if(x<0) return false;
	int len=1;
	while(x/len>=10)
	{
		len*=10;
	}
	int i=0,j=0;
	while(x!=0)
	{
		if((x/len)!=(x%10)) return false;
		x=(x%len)/10;
		len/=100;
	}
	return true;
}
int main()
{
	cout<<isPalindrome(11)<<endl;
	return 0;
}

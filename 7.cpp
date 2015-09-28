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
int reverse(int x) {
	int res=0;
	while(x)
	{
		if(abs(res)>INT_MAX/10) return 0;
		res=res*10+x%10;
		x/=10;
	}
	
	return res;
}
int main()
{
	cout<<reverse(-2147483648)<<endl;
	return 0;
}

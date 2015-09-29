#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
#include <string>
#include <utility>
using namespace std;

int countPrimes(int n) {
	bool *a = new bool[n];
	memset(a,0,sizeof(bool)*n);
	for(int i=2;i*i<n;++i)
	{
		if(!a[i])
			for(int j=i;j*i<n;++j)
			{
				a[i*j]=true;
			}
	}
	int count=0;
	for(int i=2;i<n;++i)
		if(!a[i]) count++;

	return count;
}

int main()
{
	int n=20;
	cout<<countPrimes(n)<<endl;
	return 0;
}

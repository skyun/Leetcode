#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define min(x,y) (x>y?y:x)
#define max(x,y) (x>y?x:y)

// 将两个矩形的四个点映射到直线上，转换成两条线段是否相交的问题
int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
	int result=abs(C-A)*abs(D-B)+abs(G-E)*abs(H-F);
	// if it is covered
	if((min(C,G)>max(A,E))&&(max(B,F)<min(D,H)))
	{
		result-=abs(min(C,G)-max(A,E))*abs(max(B,F)-min(D,H));
	}
	return result;
}
int main()
{
	int A=0,B=-1,C=1,D=2,E=-1,F=0,G=2,H=1;
	cout<<computeArea(A, B, C, D, E, F, G, H)<<endl;
	return 0;
}

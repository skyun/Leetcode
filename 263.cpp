#include <iostream>
#include <vector>
using namespace std;
bool isUgly(int num) {
	if(num<1) return false;
	if(num<4) return true;
	while((num/2)*2==num) num/=2;
	while((num/3)*3==num) num/=3;
	while((num/5)*5==num) num/=5;
	return num>1?false:true;
}
int main()
{
	cout<<isUgly(7)<<endl;
}

#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
    int myAtoi(string str) {
		if(str.length()==0)
			return 0;
		int i=0,signal=1,flags=0;
		long long num=0;
		while(str[i]!='\0' && str[i]==' ') ++i;// skip the whitespace
		while(str[i]!='\0' && (str[i]=='+' || str[i]=='-'))
		{
			if(str[i]=='-') signal=-1;
			flags++;
			i++;
		}
		if(flags>1)
			return 0;
		for(;i<str.length();++i)
		{
			if(str[i]>='0' && str[i]<='9')
				num=num*10+signal*(str[i]-'0');
			else break;
			if(num>INT_MAX || num<INT_MIN) return signal>0?INT_MAX:INT_MIN;
		}

		return num;
    }

int main()
{
	cout<<myAtoi("  -0012a42")<<endl;
	return 0;
}

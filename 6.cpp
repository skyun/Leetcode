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
string convert(string s, int numRows) {
	if(numRows==1) return s;
	string res="";
	int step=numRows*2-2;
	int sSize=s.size();
        for(int i=0;i<numRows;i++)
		{
			for(int j=i;j<sSize;j++)
				if(j%step==i || j%step==step-i)
					res+=s[j];
		}
		return res;
    }
int main()
{
	string s="PAYPALISHIRING";
	int numRows=3;
	string result=convert(s,numRows);
	cout<<result<<endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;
//http://blog.csdn.net/feliciafay/article/details/16984031
// DP 

string longestPalindrome(string s){
	int len=s.size();
	if(len==1) return s;
	int longest=1;
	int start=0,center=0;
	while(center+longest/2<len){
		int l=center,r=center+1;
		while(s[l]==s[r]) ++r;
		center=r;
		while(l>0 && s[l-1]==s[r]){--l;++r;}
		if(r-l>longest){
			longest=r-l;
			start=l;
		}
	}
	return s.substr(start,longest);
}

int main()
{
	cout<<longestPalindrome("a")<<endl;
}

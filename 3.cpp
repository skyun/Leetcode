#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
#if 1
		if(s.length()==0) return 0;
		bool sign[256];
		int maxLen=0;
		memset(sign,0,sizeof(sign));
		for(int i=0,j=0;j<s.length();++j)
		{
			while(sign[s[j]]){ sign[s[i++]]=0;}
			sign[s[j]]=true;
			maxLen=maxLen>(j-i+1)?maxLen:(j-i+1);
		}
		return maxLen;
#else
	if(s.length()==0) return 0;
	int maxLen=0;
	unordered_set<int> uset;
	unordered_set<int>::iterator uit;
	for(int i=0;i<s.length();++i)
	{
		uset.clear();
		int tmpLen=0;
		for(int j=i;j<s.length();++j)
		{
			uit=uset.find(s[j]);
			if(uit==uset.end())
			{
				uset.insert(s[j]);
				tmpLen++;
			}else{
				maxLen=maxLen>tmpLen?maxLen:tmpLen;
			}
		}
	}
	return maxLen;
#endif
}
int main()
{
	string test="abcabcbb";
	cout<<lengthOfLongestSubstring(test);
	return 0;
}

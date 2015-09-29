#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <map>
#include <string>
#include <utility>
using namespace std;   
bool isIsomorphic(string s, string t) {
	//if(s==t) return true;
	//map<char,char> stmap;
	//for(int i=0;i<s.size();i++)
	//{
	//	if(stmap.find(s[i])==stmap.end())
	//		stmap[s[i]]=t[i];
	//	else if(stmap[s[i]]!=t[i])
	//		return false;
	//}
	//stmap.clear();
	//for(int i=0;i<s.size();i++)
	//{
	//	if(stmap.find(t[i])==stmap.end())
	//		stmap[t[i]]=s[i];
	//	else if(stmap[t[i]]!=s[i])
	//		return false;
	//}

	if(s==t) return true;
	map<char,int> smap;
	map<char,int> tmap;
	pair<map<char,int>::iterator,bool> spair;
	pair<map<char,int>::iterator,bool> tpair;
	for(int i=0;i<s.size();i++)
	{
		spair=smap.insert(pair<char,int>(s[i],i));
		tpair=tmap.insert(pair<char,int>(t[i],i));
		if(spair.second ^ tpair.second)
			return false;
		else if(spair.second==false)
		{
			map<char,int>::iterator sit=spair.first;
			map<char,int>::iterator tit=tpair.first;
			if(sit->second!=tit->second)
				return false;
		}
	}
	return true;
}
int main()
{
	string s="aba";
	string t="baa";
	cout<<isIsomorphic(s,t)<<endl;
	return 0;
}

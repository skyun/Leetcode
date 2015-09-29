#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isValid(string s){
	int len=s.size();
	vector<char> sta;
	sta.push_back(s[0]);
	for(int i=1;i<len;++i){
		if(s[i]=='(') {sta.push_back('(');continue;}
		if(s[i]=='[') {sta.push_back('[');continue;}
		if(s[i]=='{') {sta.push_back('{');continue;}
		if((s[i]==')' || s[i]==']' || s[i]=='}') && sta.size()==0) return false;
		if(s[i]==')' && sta[sta.size()-1]=='(') {sta.pop_back();continue;}
		else if(s[i]==')') return false;
		if(s[i]==']' && sta[sta.size()-1]=='[') {sta.pop_back();continue;}
		else if(s[i]==']') return false;
		if(s[i]=='}' && sta[sta.size()-1]=='{') {sta.pop_back();continue;}
		else if(s[i]=='}') return false;		
	}
	if(sta.size()) return false;

	return true;
}

int main()
{
	cout<<isValid("()")<<endl;
	system("pause");
}

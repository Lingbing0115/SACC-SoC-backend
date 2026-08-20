#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cout<<"请输入活动编号：";
	cin>>s;
    if(s.front()=='-'){
        cout<<"false"<<endl;
        return 0;
    }
	for(int i=0;i<s.size()/2;i++)
	{
	if(s[i]!=s[s.size()-1-i]){
		cout<<"false"<<endl;
        return 0;
    }
	}
	cout<<"true"<<endl;
	return 0;
    //本题代码在修改非核心部分的情况下已通过leetcode.9.回文数 测评
}
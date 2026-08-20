#include <bits/stdc++.h>
using namespace std;

int main(){
    string userName;
    int noteNum;
    string tag;
    cout <<"请输入昵称：";
    cin>>userName;
    cout <<"请输入笔记数：";
    cin>>noteNum;
    cout <<"请输入已关注tag：";
    cin>>tag;
    cout <<userName<<" has "<<noteNum<<" notes and follows "<<tag<<"."<<endl;
    return 0;
}
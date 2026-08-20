#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> hotScore;
    string rawData;
    int target;
    bool found = false;
    cout<<"请输入热度分数数据（以空格分隔）：";
    getline(cin, rawData);
    stringstream ss(rawData);
    int score;
    while(ss >> score){
        hotScore.push_back(score);
    }
    cout<<"请输入目标分数：";
    cin>> target;
    for(int i=0;i<hotScore.size();i++){
        for(int j=i+1;j<hotScore.size();j++){
            if(hotScore[i]+hotScore[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                found = true;
            }
        }
    }
    if(!found){
        cout<<"未找到满足条件的天数组合。"<<endl;
    }
    return 0;
    //本题代码已通过leetcode.1.两数之和 测评
}
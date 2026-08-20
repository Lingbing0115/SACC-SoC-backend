#include <bits/stdc++.h>
using namespace std;
int calculateScore( int likes,int saves){
    int score=likes*2+saves*3;
    return score;
}
int main(){
    int like,save,score;
    cin>>like;
    cin>>save;
    score = calculateScore(like,save);
    cout<<score<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int calculateScore( int likes,int saves,int comments){
    int score=likes*2+saves*3+comments;
    return score;
}
int main(){
    int n;
    vector<int> score(n);
    cin>>n;
    for (int i=0;i<n;i++){
        int like,save,comment;
        cin>>like>>save>>comment;
        score[i]=calculateScore(like,save,comment);
    }
    for(int a=0;a<n-1;a++){
        for(int b=0;b<n-1-a;b++){
            if(score[b]<score[b+1]){
                int temp = score[b];
                score[b] = score[b+1];
                score[b+1] =temp;
            }
        }
    }
    for(int c=0;c<n;c++){
        cout<<score[c]<<endl;
    }
    return 0;
}
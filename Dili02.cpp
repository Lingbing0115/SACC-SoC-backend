#include<bits/stdc++.h>
using namespace std;
int main() {
    int sum = 0;
    for(int i=0;i<7;i++){
        int view;
        cout<<"新增播放量为：";
        cin>> view;
        sum+= view;
    }
    cout << "累计播放量为: " << sum << endl;
    return 0;
}
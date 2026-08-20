#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    int count=0;
    cin>>sum;
    for(int i=0;i<sum;i++){
        int length;
        cin>>length;
        if(length>20){
            count++;
        }
    }
    cout <<count<<endl;
    return 0;
}
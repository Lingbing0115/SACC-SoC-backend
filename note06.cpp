#include <bits/stdc++.h>
using namespace std;
class note{
    private:
    string titel_;
    int likes_;
    public:
        note(const string& titel,int likes)
        :titel_(titel),likes_(likes){

        }
        void addLikes(int newLikes){
            likes_+=newLikes;
        }
        void displayInfo(){
            cout << titel_ <<": "<<likes_<<endl;
        }
};
int main(){
    string titel;
    int like,newLike;
    cin >> titel >>like;
    note note(titel,like);
    cin >>newLike;
    note.addLikes(newLike);
    note.displayInfo();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Video
{
    private:
        string title;
        string author;
        int views;
        int likes;
    public:
        Video(string t, string a, int v, int l) : title(t), author(a), views(v), likes(l) {}
        void displayInfo() const {
            cout << "标题: " << title << endl;
            cout << "作者: " << author << endl;
            cout << "播放量: " << views << endl;
            cout << "点赞数: " << likes << endl;
        }
        void likeVideo() {
            likes++;
            cout << "点赞成功！当前点赞数: " << likes << endl;
        }
};
int main(){
    Video video("【洛天依/乐正绫原创】霜雪千年【PV付/COP】", "COPY", 6496000, 214000);
    video.displayInfo();
    cout<<"-----------------------------------"<<endl;
    video.likeVideo();
    return 0;
}
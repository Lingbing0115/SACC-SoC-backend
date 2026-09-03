#include <bits/stdc++.h>
using namespace std;
class content{
    private:
        string id,titel,author,platform,tag1,tag2,tag3;
        long long plays,likes,saves,comments,shares;
        bool isBlank = true;
        float  score = 0;
    public:
        content() = default;
        content(string _id, string _titel, string _author, string _platform,
            long long _plays, long long _likes, long long _saves,
            long long _comments, long long _shares,
            string _tag1, string _tag2, string _tag3)
        : id(_id), titel(_titel), author(_author), platform(_platform),
        plays(_plays), likes(_likes), saves(_saves),
        comments(_comments), shares(_shares),
        tag1(_tag1), tag2(_tag2), tag3(_tag3) {
        isBlank = false;
        }
        long long getPlays() const { 
            return plays;
        }
        long long getLikes() const { 
            return likes; 
        }
        long long getComments() const { 
            return comments; 
        }
        long long getSaves() const {
            return saves; 
        }
        string getAuthor() const {
            return author; 
        }
        float getScore() const{
            return score;
        }
        //这里有一堆get，不是因为我的习惯好，而是因为我忘了在类里直接访问私有变量的权限，导致我写了一个又一个get函数
        void scoreRenew(float temp){
            score =temp;
            cout << "内容流量得分已刷新"<<endl;
        } 
        void inputInfo(){
            cout << "请输入内容编号：";
            cin >>id;
            cout << "请输入标题：";
            cin >>titel;
            cout << "请输入作者：";
            cin >>author;
            cout << "请输入平台：";
            cin >>platform;
            cout << "请输入播放量：";
            cin >>plays;
            cout << "请输入点赞数：";
            cin >>likes;
            cout << "请输入收藏数：";
            cin >>saves;
            cout << "请输入评论数：";
            cin >>comments;
            cout << "请输入转发数：";
            cin >>shares;
            cout << "请输入3个Tag(以空格分隔)：";
            cin >>tag1 >> tag2 >>tag3;
            isBlank = false;
        }
        void displayInfo(){
            if (isBlank){
                cout << "当前还没有内容数据，运营同学还没开始发疯。" <<endl;
            }
            else {
                cout <<"内容编号："<<id<<endl;
                cout <<"标题："<<titel<<endl;
                cout <<"作者："<<author<<endl;
                cout <<"平台："<<platform<<endl;
                cout <<"播放量："<<plays<<endl;
                cout <<"点赞数："<<likes<<endl;
                cout <<"评论数："<<comments<<endl;
                cout <<"转发数："<<shares<<endl;
                cout <<"Tag："<<tag1<<","<<tag2<<","<<tag3<<endl;
            }
        }
        void displayLevel(){
            if (isBlank){
                cout << "当前还没有内容数据，运营同学还没开始发疯。" <<endl;
            }
            else {
                if (score <1000){
                    cout << "流量评分："<<score<<endl;
                    cout <<"内容热度等级："<<"无人问津"<<endl;
                }
                else if (score <10000 && score >=1000)
                {
                    cout << "流量评分："<<score<<endl;
                    cout <<"内容热度等级："<<"有点水花"<<endl;
                }
                else if (score <50000 && score >=10000)
                {
                    cout << "流量评分："<<score<<endl;
                    cout <<"内容热度等级："<<"小爆一下"<<endl;
                }
                else if (score <200000 && score >=50000)
                {
                    cout << "流量评分："<<score<<endl;
                    cout <<"内容热度等级："<<"大爆预备"<<endl;
                }
                else{
                    cout << "流量评分："<<score<<endl;
                    cout <<"内容热度等级："<<"爆款候选"<<endl;
                }
            }
        }
        void displayScore(){
            cout << "该内容流量得分目前为：" << score << "(需手动更新)" <<endl;
        }
        void search(){
            string keyword;
            cout << "请输入关键字：";
            cin >>keyword;
            if (keyword.empty()){
                cout <<"关键字不能为空:(" <<endl;
            }
            else
            {
                if (titel.find(keyword)!= std::string::npos){
                    cout << "相关内容：" <<titel <<endl;
                }
                else
                {
                    cout <<"未搜索到相关内容"<<endl;
                }
                if (author.find(keyword)!= std::string::npos){
                    cout << "相关创作者：" <<author <<endl;
                }
                else
                {
                    cout <<"未搜索到相关创作者"<<endl;
                }
            }
            
        }
};
class Creator{
    private:
    string name;
    long long followerCount,contentCount;
    float totalScore=0;
    bool isEmpty =true;
    public:
        Creator() = default;
    
        Creator(string _name, long long _follower, long long _content)
            : name(_name), followerCount(_follower), contentCount(_content) {
            isEmpty = false;
        }
        void inputInfo(){
            cout << "请输入用户名：";
            cin >>name;
            cout << "请输入粉丝数：";
            cin >>followerCount;
            cout << "请输入投稿数：";
            cin >>contentCount;
            isEmpty = false;
        }
        void addScore(content& cont){
            if (name == cont.getAuthor()){
                totalScore+= cont.getScore();
                cout << "校验通过，创作者热度得分已刷新" <<endl;
            }
            else {
                cout << "内容与该创作者无关" <<endl;
            }
        }
        void displayInfo(){
            if (isEmpty){
                cout << "当前还没有账号数据，运营同学还没开始发疯。" <<endl;
            }
            else {
                cout <<"用户名："<<name<<endl;
                cout <<"粉丝数："<<followerCount<<endl;
                cout <<"投稿数："<<contentCount<<endl;
                cout <<"总流量得分："<<totalScore<<"(需手动更新)"<<endl;
            }
        }
};
class platform{
    public:
    virtual ~platform()=default;
    virtual float calculateScore(content& cont) =0;
    virtual void addScore(float temp) =0;
};
class Dili :public platform{
    private:
    float sumScore=0;
    public:
    float calculateScore(content& cont) override{
        return cont.getPlays()*0.3+cont.getLikes()*2+cont.getComments()*4+cont.getSaves()*6;
        //d站分数 = 播放量 * 0.3 + 点赞 * 2 + 评论 * 4 + 收藏 * 6
    }
    void addScore(float temp){
        sumScore += temp;
        cout << "D站得分已刷新"<<endl;
    }
    void displayScore(){
        cout << "当前D站总得分为：" <<sumScore<<"(需手动刷新)" <<endl;
    }
};
class trafficAnalyzer{
    public: 
    void scoreUpdate(platform& pl,content& co,Creator& cr){
        float temp = pl.calculateScore(co);
        co.scoreRenew(temp);
        cr.addScore(co);
        pl.addScore(temp);
    }
};
int main(){
    content testCont(
        "1",
        "【洛天依x乐正绫】穿梭古今，巡演杭州站再唱《霜雪千年》",
        "洛天依",
        "D站",
        513000, 90000, 27000, 3485, 4662,
        "VOCALOID", "洛天依", "乐正绫"
    );
    Creator testUser("洛天依", 5998129, 490 + 1261 + 2);
    Dili dili;
    trafficAnalyzer update;
    while (true )
    {
        int mode;
        cout <<"##本程序仅供测试可行性，已预录入一组未处理数据##"<<endl;
        cout <<"请选择你要进行的操作："<<endl;
        cout <<"1. 查看所有内容数据"<<endl;
        cout <<"2. 更新流量得分"<<endl;
        cout <<"0. 退出系统"<<endl;
        cin >> mode;
        if (mode ==1)
        {
            testCont.displayInfo();
            testCont.displayScore();
            testUser.displayInfo();
            dili.displayScore();
        }else if (mode ==2)
        {
            update.scoreUpdate(dili,testCont,testUser);
        }
        else if(mode==0)
        {
            break;
        }
        else 
        {
            cout <<"无效输入，请重新选择"<<endl;
        }
    }
    cout << "正在退出系统ing"<<endl;
    return 0;
}
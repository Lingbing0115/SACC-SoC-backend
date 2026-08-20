#include <bits/stdc++.h>
using namespace std;
class content{
    private:
        string id,titel,author,platform,tag1,tag2,tag3;
        long long plays,likes,saves,comments,shares;
        bool isBlank = true;
    public:
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
        void ScoreAndLevel(){
            if (isBlank){
                cout << "当前还没有内容数据，运营同学还没开始发疯。" <<endl;
            }
            else {
                float  score = plays*0.4 + likes*2 + comments*3 + shares*4 + saves*5;
                //流量分数 = 播放量 * 0.4 + 点赞数 * 2 + 评论数 * 3 + 转发数 * 4 + 收藏数 * 5
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
int main(){
    cout << "欢迎来到跳音流量观察台"<<endl;
    cout << "当前身份：后端组 SOC 实习生"<<endl;
    cout << "负责人：yantz"<<endl;
    content testCont;
    while (true)
    {
        int mode;
        cout <<"##本程序仅供测试，仅可录入一组数据##"<<endl;
        cout <<"请选择你要进行的操作："<<endl;
        cout <<"1. 添加一条内容数据"<<endl;
        cout <<"2. 查看所有内容数据"<<endl;
        cout <<"3. 计算并展示流量等级"<<endl;
        cout <<"4. 搜索指定标题或作者"<<endl;
        cout <<"0. 退出系统"<<endl;
        cin >> mode;
        if (mode ==1)
        {
            testCont.inputInfo();
        }else if (mode ==2)
        {
            testCont.displayInfo();
        }
        else if (mode ==3)
        {
            testCont.ScoreAndLevel();
        }
        else if (mode ==4)
        {
            testCont.search();
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
/*测试样例
编号 1
标题 【洛天依×乐正绫】穿梭古今，巡演杭州站再唱《霜雪千年》
作者 洛天依
平台 B站
播放量 513000
点赞数 90000
收藏数 27000
评论数 3485
转发数 4662
Tag VOCALOID 洛天依 乐正绫
*/
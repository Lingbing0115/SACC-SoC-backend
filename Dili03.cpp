#include<bits/stdc++.h>
using namespace std;
class Watch
{
public:
    virtual ~Watch() = default;
    virtual string watchLevel() const = 0;
};
class user : public Watch
{
    public:
    string watchLevel() const override {
        return "观看普通视频";
    }
};
class VIPuser : public Watch
{
    public:
    string watchLevel() const override {
        return "观看VIP视频";
    }
};
void displayWatchLevel(const Watch& wa) {
    cout << wa.watchLevel() << endl;
}
int main(){
    user User;
    VIPuser vipUser;

    displayWatchLevel(User);
    displayWatchLevel(vipUser);

    return 0;
}
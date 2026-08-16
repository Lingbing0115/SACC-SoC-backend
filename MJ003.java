public class MJ003 {
    public static void main() {
        String userName = "1147691796";
        String nickName = "ttdr";
        String password = "114514";
        int[] loginTimes ={1,2,1,4,5,6,7};
        int loginDays = 7;
        int loginTimesSum = 0;
        boolean isNews = false;
        for (int i = 0; i < 7; i++) {
            loginTimesSum += loginTimes[i];
        }
        System.out.println("UserInfoCard" );
        System.out.println("ID: " + userName);
        System.out.println("NickName: " + nickName);
        System.out.println("LoginDays: " + loginDays);
        System.out.println("TotalLoginTimes: " + loginTimesSum);
        if(isNews){
            System.out.println("NEWuser");
        }
        else{
            System.out.println("OLDuser");
        }
    }
}

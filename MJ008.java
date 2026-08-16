class Account {
        String nickName;
        String userName;
        String password;
        String status;
        String signUpTime;
        String Password;
        public Account(String userName, String password, String nickName, String status, String signUpTime){
            this.userName = userName;
            this.password = password;
            this.nickName = nickName;
            this.status = status;
            this.signUpTime = signUpTime;
            char firstChar = password.charAt(0);
            char lastChar = password.charAt(password.length() - 1);
            this.Password = firstChar + "******"+lastChar + "";
    }
}
public class MJ008 {
    public static void main(String[] args) {
    String userName="ttdr";
    String password="123456";
    String nickName="dcds";
    String status="active";
    String signUpTime="2077-13-32";
    Account testAccount = new Account(userName, password, nickName, status, signUpTime);
    System.out.println("UserInfoCard" );
    System.out.println("ID: " + testAccount.userName);
    System.out.println("NickName: " + testAccount.nickName);
    System.out.println("Password: " + testAccount.Password);
    System.out.println("Status: " + testAccount.status);
    System.out.println("SignUpTime: " + testAccount.signUpTime);
    }
}

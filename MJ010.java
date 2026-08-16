class Account010 {
        String userName;
        private String password;
        String status;
        String maskedPassword;
        public Account010(String userName, String password, String status){
            this.userName = userName;
            this.password = password;
            this.status = status;
            char firstChar = password.charAt(0);
            char lastChar = password.charAt(password.length() - 1);
            this.maskedPassword = firstChar + "******"+lastChar + "";
        }
        public String renewPassword(String newPassword) {
            this.password = newPassword;
            char firstChar = newPassword.charAt(0);
            char lastChar = newPassword.charAt(newPassword.length() - 1);
            this.maskedPassword = firstChar + "******"+lastChar + "";
            return this.maskedPassword;
        }
        public void isAllowLogin(){
            if(this.status.equals("active")){
                System.out.println("允许登录");
            }
            else{
                System.out.println("禁止登录");
            }
        }
}
public class MJ010 {
    public static void main(String[] args) {
        Account010 account1 = new Account010("LuoTianyi0712","123456","active");
        System.out.println("UserInfoCard");
        System.out.println("ID: " + account1.userName);
        System.out.println("Status: " + account1.status);
        System.out.println("Masked Password: " + account1.maskedPassword);
        account1.isAllowLogin();
    }
}
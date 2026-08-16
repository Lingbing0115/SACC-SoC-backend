class Account009  {
        String userName;
        String status;
        public Account009(String userName,String status){
            this.userName = userName;
            this.status = status;
        }
}
public class MJ009 {
    public static void main(String[] args){
        Account009 account1 = new Account009("LuoTianyi0712","active");
        Account009 account2 = new Account009("UshioNoa0413","inactive");
        Account009[] accounts = {account1, account2};
        for (Account009 account : accounts) {
            System.out.println("UserInfoCard");
            System.out.println("ID: " + account.userName);
            System.out.println("Status: " + account.status);
        }
    }
}

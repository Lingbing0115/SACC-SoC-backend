class userData011{
    String name;
    String password;
    public userData011(String name, String password){
        this.name = name;
        this.password = password;
    }
}
public class MJ011 {
    public static String encryptPassword(String password){
        char firstChar = password.charAt(0);
        char lastChar = password.charAt(password.length() - 1);
        String encryptedPassword = firstChar + "******"+lastChar + "";
        return encryptedPassword;
    }
    public static void buildWelcomeMessage(String userName){
        System.out.println("HELLO,tech otakus save the WORLD here, miHoyopass:" + userName + "已注册！〇神，启动！");
        //随便写的qwq
    }
    public static void main(String[] args) {
        String testName = "海猫络合物";
        String testPassword = "325325";
        String encryptedPassword = encryptPassword(testPassword);
        userData011 user = new userData011(testName, encryptedPassword);
        System.out.println("账号信息已保存，已加密密码为：" + user.password);
        buildWelcomeMessage(testName);
    }
}

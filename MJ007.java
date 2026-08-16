public class MJ007 {
    public static boolean validateUserName(String userName){
        boolean isValid = true;
        if(userName.isBlank()){
            isValid = false;
        }
        return isValid;
    }
    public static boolean validatePassword(String password){
        boolean isValid = true;
        try{
            int Password = Integer.parseInt(password);
        }catch (NumberFormatException e){
            isValid = false;
        }
        return isValid;
    }
    public static String encryptPassword(String password){
        String encryptedPassword = "";
        for(int i=0;i<password.length();i++){
            char c = password.charAt(i);
            int asciiValue = (int)c;
            int encryptedAsciiValue = asciiValue + 3;
            char encryptedChar = (char)encryptedAsciiValue;
            encryptedPassword += encryptedChar;
        }
        return encryptedPassword;
    }
    public static void buildWelcomeMessage(String userName){
        System.out.println("HELLO,tech otakus save the WORLD here, miHoyopass:" + userName + "已注册！〇神，启动！");
        //随便写的qwq
    }
    public static void main(String[] args) {
        //账号信息准备
        String testName = "海猫络合物";
        String testPassword = "325325";
        if(validateUserName(testName) && validatePassword(testPassword)){
            //校验账号信息
            String encryptedPassword = encryptPassword(testPassword);
            System.out.println("账号信息合法，已加密密码为：" + encryptedPassword);
            System.out.println("账号信息已保存");
            buildWelcomeMessage(testName);
        }
        else{
            System.out.println("账号信息不合法，请重新输入！");
        }
    }
}

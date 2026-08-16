public class MJ006 {
    public static boolean validateAccount(String userName,String password){
        boolean isValid = true;
        if(userName.isBlank()){
            isValid = false;
        }
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
        String testName = "海猫络合物";
        String testPassword = "325325";
        if(validateAccount(testName, testPassword)){
            String encryptedPassword = encryptPassword(testPassword);
            buildWelcomeMessage(testName);
        }
    }
}

public class MJ012 {
    public static boolean userNameCheck(String userName){
        boolean isValid = true;
        if(userName.isBlank()){
            isValid = false;
        }
        return isValid;
    }
    public static String userNameProcess(String userName){
        String processedUserName = userName.trim();
        if(processedUserName.contains("退款") ){
            processedUserName = processedUserName.replace("退款", "***");
        }
        return processedUserName;
    }
    public static void passwordCheck(String password,String username){
        if(password.contains(username)){
            System.out.println("密码安全性较弱，建议修改密码！");
        }
    }
    public static void buildWelcomeMessage012(String userName){
        System.out.println("HELLO,tech otakus save the WORLD here, " + userName  );
        //随便写的qwq
    }
    public static void main(String[] args) {
        String testName = "海猫!来自星尘，退款！";
        String testPassword = "325325";
        if(userNameCheck(testName)){
            String processedUserName = userNameProcess(testName);
            //System.out.println("账号信息合法，已处理用户名为：" + processedUserName);
            passwordCheck(testPassword, processedUserName);
            buildWelcomeMessage012(processedUserName);
        }
        else{
            System.out.println("账号名不能为空，请重新输入！");
        }
    }
}

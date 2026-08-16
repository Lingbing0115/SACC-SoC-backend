public class MJ004 {
     public static void main() {
        String nickName = "ttdr";
        String password = "114514";
        String loginDays = "7";
        String status = "normal";
        int flag = 0;
        if (nickName.isBlank()){
            System.out.println("账号名不能为空");
        }
        else{
            flag++;
        }
        if (password.length()<6){
            System.out.println("密码长度不足");
        }
        else{
            flag++;
        }
        if (status.equals("blocked")){
            System.out.println("账号风险拦截");
        }
        else{
            flag++;
        }
        try{
            int days = Integer.parseInt(loginDays);
            flag++;
        }catch (NumberFormatException e){
            System.out.println("登录天数格式错误");
        }
        if (flag == 4){
            System.out.println("账号校验通过");
        }
    }
}

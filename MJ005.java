public class MJ005 {
    public static void main() {
        int sum = 0;
        String[] userNames = {"LuoTianyi0712","HatsuneMiku0831","UshioNoa0413","Dusk1111","KuchibaChisa"};
        for (int i=0;i<5;i++){
        if(userNames[i].isBlank()){
            continue;
        }
        else if(userNames[i].equals("risk_user")){
            break;
        }
        else{
            System.out.println("正在创建账号：" + userNames[i]);
            sum++;
        }
        }
        System.out.println("已处理" + sum + "个账号");
    }
}

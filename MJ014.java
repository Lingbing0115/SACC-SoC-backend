import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
class Counter014{
    private int count=0;
    public synchronized void add(){
        count++;
    }
    public int getCount(){
        return count;
    }
}
public class MJ014 {
    public static void main(String [] args)throws InterruptedException{
        Counter014 counter = new Counter014();
    ExecutorService pool = Executors.newFixedThreadPool(5);
        pool.submit(() -> {createAccount("LuoTianyi0712");
        counter.add();});
        pool.submit(() -> {createAccount("HatsuneMiku0831");
        counter.add();});
        pool.submit(() -> {createAccount("KagamineLen1227");
        counter.add();});
        pool.submit(() -> {createAccount("KagamineRin1227");
        counter.add();});
        pool.submit(() -> {createAccount("MegurineLuka0130");
        counter.add();});
        pool.shutdown();
        pool.awaitTermination(2, TimeUnit.SECONDS);
        System.out.println("已创建账号数量：" + counter.getCount());
    }
    public static void createAccount(String userName){
        System.out.println("账号："+ userName +"创建成功");
    }
}

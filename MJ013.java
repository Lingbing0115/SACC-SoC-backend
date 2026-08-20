import java.io.BufferedReader;
import java.io.FileReader;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
public class MJ013 {
    public static void main(String[] args) {
        String filePath = "MJ013-comment.txt";
        try (BufferedWriter write = new BufferedWriter(new FileWriter(filePath))) {
            write.write("账号名：LuoTianyi0712");
            write.newLine();
            write.write("昵称：洛天依");
            write.newLine();
            write.write("密码：150412");
            write.newLine();
            write.write("创建结果：true");
        } catch (IOException e) {
            System.out.println("写入文件时发生错误" );
        }
        try (BufferedReader read = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = read.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("读取文件时发生错误");
        }
    }
}

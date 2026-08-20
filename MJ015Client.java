import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;

public class MJ015Client {
    public static void main(String[] args) throws IOException {
        try (
        Socket socket = new Socket("127.0.0.1", 8080);
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()))
        ) {
        writer.write("LuoTianyi0712");
        writer.newLine();
        writer.flush();

        String response = reader.readLine();
        System.out.println(response);
    }
}
}


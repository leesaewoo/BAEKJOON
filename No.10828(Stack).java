import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int numOfExecution = Integer.parseInt(br.readLine());
        ArrayList<Integer> al = new ArrayList<>();

        for(int i = 0 ; i < numOfExecution ; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String command = st.nextToken();

            if(command.equals("push") && st.hasMoreTokens()) {
                int num = Integer.parseInt(st.nextToken());
                al.add(num);
            }
            else if(command.equals("pop")) {
                if(al.size() == 0) {
                    bw.write("-1");
                }
                else {
                    bw.write(al.get(al.size() - 1).toString());
                    al.remove(al.size() - 1);
                }
                bw.newLine();
                bw.flush();
            }
            else if(command.equals("size")) {
                bw.write(Integer.toString(al.size()));
                bw.newLine();
                bw.flush();
            }
            else if(command.equals("empty")) {
                if(al.size() == 0) {
                    bw.write("1");
                }
                else {
                    bw.write("0");
                }
                bw.newLine();
                bw.flush();
            }
            else if(command.equals("top")) {
                if(al.size() == 0) {
                    bw.write("-1");
                }
                else {
                    bw.write(al.get(al.size() - 1).toString());
                }
                bw.newLine();
                bw.flush();
            }
            else {
                throw new IOException();
            }
        }
        bw.close();
    }
}

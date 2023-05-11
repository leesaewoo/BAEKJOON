import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int numOfExecution = Integer.parseInt(br.readLine());
        LinkedList<Integer> queue = new LinkedList<>();
        StringBuffer sb = new StringBuffer();

        for(int i = 0 ; i < numOfExecution ; i++) {
            StringTokenizer command = new StringTokenizer(br.readLine());

            switch(command.nextToken()) {
                case "push":
                    queue.add(Integer.parseInt(command.nextToken()));
                    break;

                case "pop":
                    if(queue.size() == 0) {
                        sb.append(-1).append('\n');
                    }
                    else {
                        sb.append(queue.poll()).append('\n');
                    }
                    break;

                case "size":
                    sb.append(String.format("%d\n", queue.size()));
                    break;

                case "empty":
                    if(queue.size() == 0) {
                        sb.append(1).append('\n');
                    }
                    else {
                        sb.append(0).append('\n');
                    }
                    break;

                case "front":
                    if(queue.size() == 0) {
                        sb.append(-1).append('\n');
                    }
                    else {
                        sb.append(queue.peek()).append('\n');
                    }
                    break;

                case "back":
                    if(queue.size() == 0) {
                        sb.append(-1).append('\n');
                    }
                    else {
                        sb.append(queue.peekLast()).append('\n');
                    }
                    break;
            }
        }
        System.out.println(sb);
    }
}

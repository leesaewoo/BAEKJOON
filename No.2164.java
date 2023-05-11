import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        LinkedList<Integer> deck = new LinkedList<>();

        int numOfCard = Integer.parseInt(br.readLine());

        for(int i = 1 ; i <= numOfCard ; i++) {
            deck.add(i);
        }

        while(deck.size() != 1) {
            deck.poll();
            deck.add(deck.peek());
            deck.poll();
        }

        System.out.println(deck.get(0));
    }
}
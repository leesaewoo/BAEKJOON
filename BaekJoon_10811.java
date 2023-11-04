import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringJoiner;

public class BaekJoon_10811 {

    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

    public void getBucketNumbers() throws IOException {

        String[] nAndM = bufferedReader.readLine().split(" ");
        int n = Integer.parseInt(nAndM[0]);
        int m = Integer.parseInt(nAndM[1]);

        String[] buckets = new String[n + 1];

        for(int index = 0 ; index < n + 1 ; index++) {
            buckets[index] = Integer.toString(index);
        }

        for(int index = 0 ; index < m ; index++) {
            String[] iAndJ = bufferedReader.readLine().split(" ");
            int i = Integer.parseInt(iAndJ[0]);
            int j = Integer.parseInt(iAndJ[1]);
            int k = j - i + 1;

            buckets = reverseBucketSequence(buckets, i, j, k);
        }

        StringJoiner stringJoiner = new StringJoiner(" ");

        for(int index = 1 ; index < n + 1 ; index++) {
            stringJoiner.add(buckets[index]);
        }

        System.out.println(stringJoiner.toString());
    }

    String[] reverseBucketSequence(String[] buckets, int i, int j, int k) {

        String temp;

        for(int index = i ; index < i + (k / 2) ; index++) {
            temp = buckets[index];
            buckets[index] = buckets[j];
            buckets[j] = temp;
            j--;
        }

        return buckets;
    }
}
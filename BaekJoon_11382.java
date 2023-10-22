//문제
//꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!
//
//입력
//첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 1012)이 공백을 사이에 두고 주어진다.
//
//출력
//A+B+C의 값을 출력한다.

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BaekJoon_11382 {
    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
    public long getSum() throws IOException {
        String inputString = bufferedReader.readLine();
        String[] stringArr = inputString.split(" ");
        long result = Long.parseLong(stringArr[0]) + Long.parseLong(stringArr[1]) + Long.parseLong(stringArr[2]);
        return result;
    }
}

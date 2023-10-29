//문제
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다.
// 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다.
// 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
//
//출력
//첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class BaekJoon_10818 {

    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

    public void getMinAndMax() throws IOException {
        int totalNumber = Integer.parseInt(bufferedReader.readLine());
        String[] integers = bufferedReader.readLine().split(" ");
        List<Integer> integerList = Arrays.stream(integers).map(Integer::parseInt).collect(Collectors.toList());
        int min = Collections.min(integerList);
        int max = Collections.max(integerList);

        System.out.print(min);
        System.out.println(" " + max);
    }
}

//혜아는 책에 있는 정수 자료형과 관련된 내용을 기억해 냈다.
//책에는 long int는 4바이트 정수까지 저장할 수 있는 정수 자료형이고
//long long int는 8바이트 정수까지 저장할 수 있는 정수 자료형이라고 적혀 있었다.
// 혜아는 이런 생각이 들었다. “int 앞에 long을 하나씩 더 붙일 때마다
//4바이트씩 저장할 수 있는 공간이 늘어나는 걸까? 분명 long long long int는 12바이트,
//long long long long int는 16바이트까지 저장할 수 있는 정수 자료형일 거야!”
//그렇게 혜아는 당황하는 면접관의 얼굴을 뒤로한 채 칠판에 정수 자료형을 써 내려가기 시작했다.
//
//혜아가 N 바이트 정수까지 저장할 수 있다고 생각해서 칠판에 쓴 정수 자료형의 이름은 무엇일까?
//
//입력
//첫 번째 줄에는 문제의 정수 N 이 주어진다. (4 <= N <= 1,000 (N은4의 배수))
//
//출력
//혜아가 N 바이트 정수까지 저장할 수 있다고 생각하는 정수 자료형의 이름을 출력하여라.


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BaekJoon_25314 {

    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

    public void getDataTypeName() throws IOException {
        int sizeOfByte = Integer.parseInt(bufferedReader.readLine());

        for(int i = 0 ; i < sizeOfByte ; i += 4) {
            System.out.print("long ");
        }

        System.out.println("int");
    }
}

import java.io.*;

public class BaekJoon_2444 {

    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

    public int getStars() throws IOException {
        int starNumber = Integer.parseInt(bufferedReader.readLine());

        if(starNumber == 1) {
            bufferedWriter.write("*\n");
            bufferedWriter.flush();
            return 0;
        }

        int totalLine = 2 * starNumber - 1; //9

        for(int i = 0 ; i < totalLine / 2 ; i++) {
            //공백 찍는 로직
            for(int j = 0 ; j < totalLine / 2 - i ; j++) {
                bufferedWriter.write(" ");
            }
            //별 찍는 로직
            for(int j = 0 ; j < 1 + 2 * i ; j++) {
                bufferedWriter.write("*");
            }

            bufferedWriter.write("\n");
        }

        for(int i = 0 ; i < totalLine ; i++) {
            bufferedWriter.write("*");
        }
        bufferedWriter.write("\n");

        for(int i = totalLine / 2 - 1 ; i >= 0 ; i--) {
            //공백 찍는 로직
            for(int j = 0 ; j < totalLine / 2 - i ; j++) {
                bufferedWriter.write(" ");
            }
            //별 찍는 로직
            for(int j = 0 ; j < 1 + 2 * i ; j++) {
                bufferedWriter.write("*");
            }
            bufferedWriter.write("\n");
        }

        bufferedWriter.flush();
        return 0;
    }
}
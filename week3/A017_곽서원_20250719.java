import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String N = br.readLine();
        int[] num = new int[10];

        // 숫자의 개수를 세는 부분
        for (int i = 0; i < N.length(); i++) {
            char digit = N.charAt(i);
            if (digit >= '0' && digit <= '9') {
                num[digit - '0']++;
            }
        }

        // 9와 6의 개수를 반올림하여 처리하는 부분
        int nineSixCount = (num[6] + num[9] + 1) / 2;

        // 최대값을 찾는 부분
        int max = 0;
        for (int i = 0; i < 10; i++) {
            if (i == 6 || i == 9) continue; // 6과 9는 따로 처리했으므로 생략
            max = Math.max(max, num[i]);
        }
        max = Math.max(max, nineSixCount);

        System.out.println(max);
    }
}

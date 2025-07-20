import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int max=0;
        int sum=0;

        for(int i=0; i<4; i++) {
            StringTokenizer st=new StringTokenizer(br.readLine());
            int out=Integer.parseInt(st.nextToken());
            int in =Integer.parseInt(st.nextToken());

            sum-=out;
            sum+=in;

            max=Math.max(max,sum);

        }
        System.out.println(max);
    }
}

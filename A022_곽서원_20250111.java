
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int Y=0;
        int M=0;

        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();


        for(int i=0; i<n; i++){
            int time=sc.nextInt();
            Y+=(time/30+1)*10;
            M+=(time/60+1)*15;

        }

        if(Y<M) System.out.println("Y "+ Y);
        else if(Y>M) System.out.println("M "+ M);
        else System.out.println("Y M "+Y);

    }
}

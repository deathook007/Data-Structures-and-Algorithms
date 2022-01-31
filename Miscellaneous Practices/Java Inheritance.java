import java.util.Scanner;
import java.io.*;
import java.lang.Math;

class cls1 {
    void add(int p, int q) {
        System.out.println(p + q);
    }
}

public class Sol {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            cls2 obj = new cls2();
            int a = sc.nextInt();
            int b = sc.nextInt();
            obj.add(a, b);
            obj.mul(a, b);
            obj.task(a, b);
        }
    }
}

class cls2 extends cls1 {
    void mul(int p, int q) {
        System.out.println(p * q);
    }

    void task(int p, int q) {
        System.out.println(p * p + q * q);
    }
}

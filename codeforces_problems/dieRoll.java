// problem link
// https://codeforces.com/contest/9/problem/A

import java.util.*;

public class die_roll{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str[] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();

            int rem = (a > b)? a:b;

            System.out.println(str[rem]);

    }
}

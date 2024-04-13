// problem link
// https://codeforces.com/contest/1760/problem/A

import java.util.*;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;

public class number{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();

        while(t--  > 0){
            List<Integer> arr = new ArrayList<>();
            int k;

            for(int i = 0 ;i < 3;i++){
                k = sc.nextInt();
                arr.add(k);
            }
            Collections.sort(arr);
            System.out.println(arr.get(1));
        }
    }
}

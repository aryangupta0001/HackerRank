import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int j = 0;
            int sum = a;
            
            while(j<n){
                sum += Math.pow(2, j++) * b;
                System.out.print(sum + " ");
            }
            System.out.println();
        }
        in.close();
    }
}

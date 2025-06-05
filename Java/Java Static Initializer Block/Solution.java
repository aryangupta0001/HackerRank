import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner Sc = new Scanner(System.in);
        
        int B = Sc.nextInt();
        int H = Sc.nextInt();
        Sc.close();
        try{
            if(B<=0 || H<=0)
                throw new java.lang.Exception("Breadth and height must be positive");
                
            else
                System.out.println(B*H);
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}

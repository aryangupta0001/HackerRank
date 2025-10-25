import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        System.out.println(A.length() + B.length());
        
        int i = 0, check = 0;
        
        while(i<A.length()){
            if(i<B.length()){
                char charA = A.charAt(i);
                char charB  = B.charAt(i);
                
                if(charA < charB){
                    System.out.println("No");
                    check = 1;
                    break;
                }
                    
                else if(charA > charB){   
                    System.out.println("Yes");
                    check = 1;
                    break;
                }
                
                i++;
            }
            
            else{
                System.out.println("Yes");
                check = 1;
                break;
            }
        }
        
        if(check == 0)
            System.out.println("No");
        
        String result = "";
        
        i = 0;
        
        result += Character.toUpperCase(A.charAt(i));
        i++;
        
        while(i<A.length())
            result += A.charAt(i++);
            
        result += " ";
        
        i = 0;
        
        result += Character.toUpperCase(B.charAt(i));
        i++;
        
        while(i<B.length())
            result += B.charAt(i++);
        
        System.out.println(result);

    }
}




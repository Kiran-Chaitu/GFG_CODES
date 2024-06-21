//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class GFG {
    public static void main(String args[]) throws IOException {

        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        Solution ob = new Solution();
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String str = read.readLine().trim();
            String ans = ob.compareFrac(str);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    int returnNumber(char n){
        if(n=='1') return 1;
        else if(n=='2') return 2;
        else if(n=='3') return 3;
        else if(n=='4') return 4;
        else if(n=='5') return 5;
        else if(n=='6') return 6;
        else if(n=='7') return 7;
        else if(n=='8') return 8;
        else if(n=='9') return 9;
        return 0;
    }
    String compareFrac(String str) {
        // Code here
        double a=0,b=0,c=0,d=0;
        boolean fraction1=true,space=false;
        String string1="",string2="";
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='/'){
                fraction1 =false;
            }
            else if(str.charAt(i)==',' || str.charAt(i)==' '){
                space=true;
                fraction1=true;
            }
            else if(fraction1==true && space == false){
                a = a*10 + returnNumber(str.charAt(i));
            }
            else if(fraction1==false && space == false){
                b = b*10+returnNumber(str.charAt(i));
            }
            else if(fraction1==true && space==true){
                c = c*10 + returnNumber(str.charAt(i));
            }
            else if(fraction1==false && space == true){
                d = d*10+returnNumber(str.charAt(i));
            }
            if(space==true && str.charAt(i)!=' ' && str.charAt(i)!=',') string2+=str.charAt(i);
            else if(space==false) string1+=str.charAt(i);
        }
        
        if((a/b)==(c/d)) return "equal";
        else if((a/b) > (c/d)) return string1;
        else return string2;
        
        
    }
}

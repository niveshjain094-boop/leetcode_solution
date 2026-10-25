class Solution {
public:
    int calculateScore(int a, int b) {
        
        string x="";
        string y="";
        int rem=0;
        while(a>0){
            rem= a%2;
            x = to_string(rem)+x;
            a=a/2;
        }
        while(b>0){
            rem= b%2;
            y = to_string(rem)+y;
            b=b/2;
        }

        int s1=0;
        int s2=0;
        for(int i=0 ; i<x.length();i++){
            if(x[i]=='1') s1++;
        }
         for(int i=0 ; i<y.length();i++){
            if(y[i]=='1') s2++;
        }
         int final=0;
        if(s1 >= s2)
           final= s1 * s2;
        else 
       final= s2/s1;
      
      return final;
    }
};

class Solution {
public:
    int reverse(int x) {
        int y;
        int s=0;
//      for(int i=n;i>=0;i--){
      while(x!=0){
            
            if(x==0) return 0;  
            y=x%10;
               
            if(s>INT_MAX/10 || s<INT_MIN/10){
                
            return 0;}
       
            s=s*10+y;
           x=x/10;
            
        }return s;
    }
};
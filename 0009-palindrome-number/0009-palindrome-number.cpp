class Solution {
public:
    bool isPalindrome(int x) {
        long a,b, s=0;
        a=x;
        if(x<0)
            return false;
        while(a!=0){
            b=a%10;
            s=s*10+b;
            a=a/10;
            
        }if(s==x)
                return true;
            else
                return false;
        
    }
};
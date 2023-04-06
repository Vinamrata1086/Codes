class Solution {
public:
    int reverse(int x) {
        int a=x;
        long b,s=0;
        while(a!=0){
            if(a==0)
                return 0;
            b=a%10;
            if(s>INT_MAX/10 || s<INT_MIN/10)
                return 0;
            s=s*10+b;
            a=a/10;
        }
        return s;
        
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(int i=0;i<=s.size();i++){
            // if(s[i]<'a' || s[i]>'z' && s[i]<'0' || s[i]>'9'&& s[i]>=65 && s[i]<=92){
            //     s.erase(i,1);
            //     i--;}
             // if(s[i]>=65 && s[i]<=92)
             //    s[i]=s[i]+32;
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
             if(isalnum(s[i])) {
                p.push_back(s[i]);
            }
        }
        string rev = p;
        reverse(rev.begin(), rev.end());
        return p == rev;
             
    }
};
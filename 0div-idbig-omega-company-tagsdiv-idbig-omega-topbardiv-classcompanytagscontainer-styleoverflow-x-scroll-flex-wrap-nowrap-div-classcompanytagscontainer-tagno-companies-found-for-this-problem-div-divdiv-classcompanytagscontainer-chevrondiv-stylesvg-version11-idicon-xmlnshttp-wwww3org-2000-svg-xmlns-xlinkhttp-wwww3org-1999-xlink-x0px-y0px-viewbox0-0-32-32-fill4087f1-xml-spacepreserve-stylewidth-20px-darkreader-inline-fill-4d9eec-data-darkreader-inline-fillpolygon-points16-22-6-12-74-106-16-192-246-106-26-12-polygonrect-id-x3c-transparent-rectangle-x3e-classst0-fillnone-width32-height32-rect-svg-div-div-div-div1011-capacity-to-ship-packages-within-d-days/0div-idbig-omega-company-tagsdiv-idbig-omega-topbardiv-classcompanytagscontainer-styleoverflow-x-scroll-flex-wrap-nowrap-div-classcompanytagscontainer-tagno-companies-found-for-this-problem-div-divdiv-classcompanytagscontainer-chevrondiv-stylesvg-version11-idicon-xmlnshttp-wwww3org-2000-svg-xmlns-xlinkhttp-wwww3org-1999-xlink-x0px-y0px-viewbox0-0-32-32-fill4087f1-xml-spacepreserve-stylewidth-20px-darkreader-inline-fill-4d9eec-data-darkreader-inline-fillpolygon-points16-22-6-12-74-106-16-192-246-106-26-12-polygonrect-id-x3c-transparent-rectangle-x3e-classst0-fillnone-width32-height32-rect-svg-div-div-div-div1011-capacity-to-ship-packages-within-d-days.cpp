class Solution {
    private:
    int solve(vector<int>& weights, int capacity){
        int day=1;
        int currCapacity=0;
        for(int i=0;i<weights.size();i++){
            if(currCapacity+weights[i]>capacity)
            {
                day+=1;
                currCapacity=weights[i];
        }
            else
                currCapacity+=weights[i];
    }
        return day;
    }
    
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l= *max_element(weights.begin(), weights.end());
        int r=0;
       
        for(int i=0;i<weights.size();i++){
            r+=weights[i];
        }
        while(l<=r){
             int mid=(l+r)/2;
            int minDays=solve(weights, mid);
            if(minDays<=days)
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
        
    }
};
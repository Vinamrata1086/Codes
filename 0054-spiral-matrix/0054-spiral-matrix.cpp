class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0, bottom=n-1, left=0, right = m-1;
       
        vector<int> v;
        while(top<=bottom && left<=right){
                for(int i=left; i<=right;i++){
                    v.push_back(matrix[top][i]);
            }
            top+=1;
        
                for(int i=top;i<=bottom;i++){
                    v.push_back(matrix[i][right]);
                }
                right-=1;
            
          if(top<=bottom){
                for(int i= right;i>=left;i--){
                    v.push_back(matrix[bottom][i]);
            }
            bottom-=1;
          }
            
            if(left<=right){
                for(int i= bottom;i>=top;i--){
                    v.push_back(matrix[i][left]);
                
            }
            left+=1;
            }
        }
        return v;
        
    }
};
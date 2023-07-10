class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int top=0, bottom=n-1, left=0, right = m-1;
       
//         vector<int> v;
//         while(top<=bottom && left<=right){
//                 for(int i=left; i<=right;i++){
//                     v.push_back(matrix[top][i]);
//             }
//             top+=1;
        
//                 for(int i=top;i<=bottom;i++){
//                     v.push_back(matrix[i][right]);
//                 }
//                 right-=1;
            
//           if(left<=bottom){
//                 for(int i= right;i>=left;i--){
//                     v.push_back(matrix[bottom][i]);
//             }
//             bottom-=1;
//           }
            
//             if(left<=right){
//                 for(int i= bottom;i>=top;i--){
//                     v.push_back(matrix[i][left]);
                
//             }
//             left+=1;
//             }
//         }
//         return v;
        
        vector<int> result;
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = cols-1, top = 0, bottom = rows-1;
        
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
        
    }
};
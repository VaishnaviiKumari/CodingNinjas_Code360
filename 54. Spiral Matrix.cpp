//54. Spiral Matrix 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = (row*col) ;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(count < total){

            // Traverse from left to right
            for(int index=startingCol; count < total && index <= endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // Traverse downwards
            for(int index=startingRow; count < total && index <= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // Traverse from right to left
            for(int index=endingCol; count < total && index>=startingCol ; index--){
                //ans.push_back(matrix[index][endingRow]);
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            for(int index=endingRow; count < total && index>=startingRow ; index--){
                //ans.push_back(matrix[startingCol][index]);
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
    }
};

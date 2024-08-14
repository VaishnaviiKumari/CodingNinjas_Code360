// POTD 14 aug 2024
//Find nth elements of spiral matrix

#include <bits/stdc++.h> 
int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();

    int startingRow = 0;
    int endingRow = n-1;
    int startingCol = 0;
    int endingCol = m-1;

    int count = 0;
    int maxCount = n*m;

    while(count < maxCount){
        for(int index=startingCol; index<=endingCol && (count < maxCount) ; index++){
            count++;
            if(count == k ) return matrix[startingRow][index];
        }
        startingRow++;

        for(int index=startingRow; index<=endingRow   && (count < maxCount) ; index++){
            count++;
            if(count == k) return matrix[index][endingCol];
        }
        endingCol--;

        for(int index=endingCol; index>=startingCol  && (count < maxCount) ; index--){
            count++;
            if(count == k) return matrix[endingRow][index];
        }
        endingRow--;

        for(int index=endingRow; index>=startingRow  && (count < maxCount)  ; index--){
            count++;
            if(count == k) return matrix[index][startingCol];
        }
        startingCol++;
    }

    return -1;
}

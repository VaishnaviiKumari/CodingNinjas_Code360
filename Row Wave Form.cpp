// Row Wave Form

#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int n = mat.size();
    int m = mat[0].size();

    vector<int> ans;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            // Traverse left to right
            for(int j=0;j<m;j++){
                ans.push_back(mat[i][j]);
            }
        }
        else{
            // Traverse right to left
            for(int j=m-1;j>=0;j--){
                ans.push_back(mat[i][j]);
            }
        }
    }
    return ans;
}

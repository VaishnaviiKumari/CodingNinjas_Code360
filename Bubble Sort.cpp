//Bubble Sort

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    bool flag = false;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag)  break; 
    }
}

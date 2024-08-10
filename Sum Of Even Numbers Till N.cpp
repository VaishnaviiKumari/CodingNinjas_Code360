//  Sum Of Even Numbers Till N

#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    // Write your code here.
    long long int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum+=i;
    }
    return sum;
}

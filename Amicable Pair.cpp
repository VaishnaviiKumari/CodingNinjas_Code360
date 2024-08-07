// Problem of the day: Code
// Amicable Pair

#include <bits/stdc++.h> 
bool amicablePair(int x, int y) {
	// Write your code here.
	int sum = 0;
	for(int i=1;i<x;i++){
		if(x%i == 0){
			sum+=i;
		}
	}
	if(sum == y) return true;
	else return false;
}

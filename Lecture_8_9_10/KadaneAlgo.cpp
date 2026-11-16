#include<bits/stdc++.h>
using namespace std;


//Kadane Algo
int maxSubarraySum(vector<int> &vec, int n){
    int currSum=0;
    int maxSum = INT_MIN;

    for(int val : vec){
        currSum += val;
        maxSum = max(maxSum,currSum);

        if(currSum< 0 ){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n = 9;
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maxSubarraySum(vec,n);
    cout<<ans<<endl;
    return 0;
}

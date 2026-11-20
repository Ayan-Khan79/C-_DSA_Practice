#include<bits/stdc++.h>
using namespace std;

int findMaxProfit(vector<int> &nums, int n){

    int maxProfit =0;
    int minValue = nums[0];

    for(int i=1;i<n;i++){
        if(nums[i] > minValue){
            int profit = nums[i]-minValue;
            maxProfit = max(maxProfit,profit);
        }
        minValue = min(minValue,nums[i]);
    }
    return maxProfit;

}


int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int> nums(n);

    cout<<"Enter the array values : "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int maxProfit = findMaxProfit(nums,n);
    cout<<"The max Profit is : "<<maxProfit<<endl;
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int> &nums){
    int num=0;
    for(int i=0;i<nums.size();i++){
        num ^= nums[i];
    }
    return num;
}

int main(){
    vector<int> nums = {2,2,1};
    int ans = singleNumber(nums);
    cout<<ans<<endl;
    return 0;
}
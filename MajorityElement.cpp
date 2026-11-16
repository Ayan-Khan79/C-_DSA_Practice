#include<bits/stdc++.h>

using namespace std;

int findMajority(vector<int> &vec, int n){
    // 1. Brute force method
    // => Count freq of each element and then check if freq > n/2
    // for(int val : vec){
    //     int freq = 0;
    //     for(int ele : vec){
    //         if(val == ele){
    //             freq++;
    //         }
    //     }
    //     if(freq>n/2){
    //         return val;
    //     }
    // }

    // 2. Sorting Approach
    // => First sort the array, then find freq in single loop as all same elements are close to each other and chek if freq>n/2

    sort(vec.begin(),vec.end());
    int freq = 1, ans = vec[0];
    for(int i=1;i<n;i++){

        if(vec[i] == vec[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = vec[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return ans;

    //3. Moore's Voting Algo
    // => Count freq of ele from starting of loop if val[i] == val[i-1], then freq++ else freq--, and in starting of loop check if freq==0, then ans = vec[i], and at last of loop return ans

}

int main(){

    vector<int> vec = {3,2,3};
    int n = vec.size();

    int ans = findMajority(vec,n);

    cout<<ans<<endl;
    return 0;
}
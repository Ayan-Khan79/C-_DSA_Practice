#include<bits/stdc++.h>
using namespace std;

pair<int,int> findPair(vector<int> &pair, int target){
    int i=0, j=pair.size()-1;
     while(i<j){
        int sum = pair[i] + pair[j];
        if(sum > target){
            j--;
        }
        else if(sum < target){
            i++;
        }
        else if(sum == target){
            return {i,j};
        }
     }
     return {-1,-1};
}
int main(){
    vector<int> vec = {2,7,11,15};

    int n = 4;
    int target = 17;
    pair<int,int> pair = findPair(vec,target);

    cout<<pair.first<<" , "<<pair.second;
    return 0;
}
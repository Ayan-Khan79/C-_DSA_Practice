#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    vector<int> vec = {1,2,3,4,5};

    //Printing all subarrays

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<vec[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
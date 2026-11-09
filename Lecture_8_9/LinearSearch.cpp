#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 100;

    bool found = false;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Target found in array"<<endl;
    }
    else{
        cout<<"Target is not present in array"<<endl;
    }
    return 0;
}
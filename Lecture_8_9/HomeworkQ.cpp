#include<bits/stdc++.h>
using namespace std;

// Function to calculate sum and product in an array
pair<int,int> calculate(int arr[], int size){
    int sum=0;
    int prod=1;

    for(int i=0;i<size;i++){
        sum+=arr[i];
        prod*=arr[i];
    }

    return {sum,prod};
}

//Function to swap max and min in array

void swapMaxandMin(int arr[], int size){
    int max = INT_MIN;
    int min = INT_MAX;

    int maxidx = 0;
    int minidx = 0;

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
            maxidx = i;
        }
        if(arr[i] < min){
            min = arr[i];
            minidx = i;
        }
    }
    swap(arr[maxidx],arr[minidx]);
}

void printUnique(int arr[], int size){
    for(int i=0;i<size;i++){
        bool flag = false;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){

    int arr[] = {1,2,3,2,4,5,1,6,3};
    int size = 9;
    // pair<int,int> ans = calculate(arr,size);
    // cout<<"The sum of array is : "<<ans.first<<endl;
    // cout<<"The product of array is : "<<ans.second<<endl;
    // cout<<"Array before swapping positions : ";
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // swapMaxandMin(arr,size);
    // cout<<"Array after swapping positions : ";
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    printUnique(arr,size);

    return 0;
}
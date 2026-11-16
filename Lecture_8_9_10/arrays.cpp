#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]  = {10,20,100,150,7,2};
    int sz= 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<sz;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    for(int i=0;i<sz;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest is : "<<largest<<endl;
    cout<<"Smallest is : "<<smallest<<endl;
    return 0;
}
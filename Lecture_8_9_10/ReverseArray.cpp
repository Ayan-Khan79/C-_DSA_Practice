#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int size){
    int i=0;
    int j=size-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
   
    cout<<"Before reversing : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    Reverse(arr,size);
    cout<<"After reversing : ";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
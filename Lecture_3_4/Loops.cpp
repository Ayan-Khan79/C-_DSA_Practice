#include<bits/stdc++.h>
using namespace std;

int main(){
    //calculate sum from 1 to n

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // int sum=0;
    // // for(int i=1;i<=n;i++){
    // //     sum+=i;
    // // }
    
    // int i=1;

    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<"The sum is : "<<sum<<endl;



    // Sum of odd numbers from 1 to n
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sum=0;

    //For loop
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    // }

    //While loop

    int i=1;
    while(i<=n){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
}
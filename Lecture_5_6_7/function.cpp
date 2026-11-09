#include<bits/stdc++.h>
using namespace std;

// int minimum(int a, int b){ // Parameters
//     if(a<b){
//         return a;
//     }
//     else {
//         return b;
//     }
// }

// int Sum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }

// int sumOfDigits(int n){
//     int sum=0;
//     while(n!=0){
//         int digit = n%10;
//         sum+=digit;
//         n = n/10;
//     }
//     return sum;
// }

// int factorial(int n){
//     int ans = 1;
//     for(int i=n;i>0;i--){
//         ans*=i;
//     }
//     return ans;
// }

// bool isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true; 
// }

// void PrintPrime(int n){
//     for(int i=2;i<=n;i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

void fibo(int n){
    int first=0;
    int sec =1;
    int num=0;
    for(int i=2;i<n;i++){
        num = first+sec;
        first=sec;
        sec=num;
    }
    cout<<num;
}

int main(){   
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fibo(n);
    return 0;
}
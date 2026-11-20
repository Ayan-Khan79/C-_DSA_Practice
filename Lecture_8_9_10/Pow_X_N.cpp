#include<bits/stdc++.h>
using namespace std;

double findPower(double x, long long int n){

    double ans = 1.0;
    long long Bform = n;

    //Checking negative power
    if(Bform < 0){
        x = 1/x;
        Bform = -Bform;
    }

    while(Bform > 0){
        if(Bform%2==1){
            ans*=x;
        }
        x*=x;
        Bform /= 2;
    }
    return ans;

}


int main(){
    long long int n;
    double x;
    cin>>x>>n;

    double ans = findPower(x,n);

    cout<<ans;

    return 0;
}
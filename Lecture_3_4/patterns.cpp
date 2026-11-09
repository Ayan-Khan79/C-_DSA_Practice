#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // 1 . Pattern
        // 1 2 3 4
        // 1 2 3 4
        // 1 2 3 4
        // 1 2 3 4
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }

    // 2. Pattern
            // 1 2 3
            // 4 5 6
            // 7 8 9
            // int k=1;
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<n;j++){
            //         cout<<k<<" ";
            //         k++;
            //     }
            //     cout<<endl;
            // }
    // 3. Pattern
            //   A B C
            //   D E F
            //   G H I

            // char ch = 'A';
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<n;j++){
            //         cout<<ch<<" ";
            //         ch++;
            //     }
            //     cout<<endl;
            // }
    //  4. Pattern
            // *
            // * *
            // * * *
            // * * * *

            // for(int i=0;i<n;i++){
            //     for(int j=0;j<i+1;j++){
            //         cout<<"*"<<" ";
            //     }
            //     cout<<endl;
            // }
    //  5. Pattern
            // 1
            // 2 2
            // 3 3 3
            // 4 4 4 4

            // for(int i=0;i<n;i++){
            //     for(int j=0;j<i+1;j++){
            //         cout<<i+1<<" ";
            //     }
            //     cout<<endl;
            // }
    //  6. Pattern  
            // A
            // B B
            // C C C
            // D D D D
            // E E E E E   

            // char ch = 'A';
            // for(int i=0;i<n;i++){
            //     for(int j=0;j<i+1;j++){
            //         cout<<ch<<" ";
            //     }
            //     ch++;
            //     cout<<endl;
            // }
    //  7. Pattern
            // 1
            // 1 2
            // 1 2 3
            // 1 2 3 4
            // for(int i=0;i<n;i++){
            //     int k=1;
            //     for(int j=0;j<i+1;j++){
            //         cout<<k<<" ";
            //         k++;
            //     }
            //     cout<<endl;
            // }
    //  8. Pattern
            // 1
            // 2 1
            // 3 2 1 
            // 4 3 2 1

            // for(int i=0;i<n;i++){
            //     int k=i+1;
            //     for(int j=0;j<i+1;j++){
            //         cout<<k<<" ";
            //         k--;
            //     }
            //     cout<<endl;
            // }
    //  9. Pattern
            // 1
            // 2 3
            // 4 5 6
            // 7 8 9 10
    // 10. Pattern
            // 1 1 1 1
            //   2 2 2
            //     3 3
            //       4

            // for(int i=0;i<n;i++){
            //     //space loop
            //     for(int j=0;j<i;j++){
            //         cout<<" ";
            //     }
            //     //number loop
            //     for(int k=0;k<n-i;k++){
            //         cout<<i+1;
            //     }
            //     cout<<endl;
            // }
    // 11. Pattern
        //             1   
        //           1 2 1  
        //         1 2 3 2 1
        //       1 2 3 4 3 2 1

                // for(int i=0;i<n;i++){
                //         // space loop
                //         for(int j=0;j<n-i-1;j++){
                //                 cout<<" ";
                //         }
                //         // first number loop
                //         for(int j=1;j<=i+1;j++){
                //                 cout<<j;
                //         }
                //         // second number loop
                //         for(int j=i;j>=1;j--){
                //                 cout<<j;
                //         }
                //         cout<<endl;
                // }

    return 0;
}
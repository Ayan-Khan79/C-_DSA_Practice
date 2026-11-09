#include<iostream>
using namespace std;

int main(){

    int a,b;
    char ch;

    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<endl;

    cout<<"Choose operator to perform action -> +, -, /, * :  ";
    cin>>ch;
    
    if(ch=='+'){
        cout<<"The addition of "<<a<<" and "<<b<<" is : "<<a+b;
    }
    else if(ch=='-'){
        cout<<"The difference between "<<a<<" and "<<b<<" is : "<<a-b;
    }
    else if(ch=='/'){
        cout<<"The quotient of "<<a<<" divided by "<<b<<" is : "<<a/b;
    }
    else if(ch=='*'){
        cout<<"The product of "<<a<<" and "<<b<<" is : "<<a*b;
    }
    else{
        cout<<"Choose a correct operator"<<endl;
    }
    return 0;
}
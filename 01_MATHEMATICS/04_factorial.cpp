//Recursive Method
#include<iostream>
double fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}

using namespace std;
int main(){
double b;
cout <<"enter number:: ";
cin>>b;
cout<<"factorial is:: "<<fact(b);
    
    return 0;
}
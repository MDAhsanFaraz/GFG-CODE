// Brain Kerningams Algorithm
#include<iostream>

using namespace std;
int countbits(int n){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;

    }
    return res;
}
int main(){
    int a=0;
    cout<<"Enter your input :";
    cin>>a;
    cout<<countbits(a);

    
    return 0;
}
#include<iostream>
using namespace std;
void IsKthbitset(int n,int k){
    if (n&(1<<(k-1)))
    cout<<"Is Set";
    else {
        cout<<"Not Set";
    }
} 


int main(){ 
    int a,b;
    cout<<"Enter your input:->\n";
    cin>>a;               
    cout<<"Enter kth Bit:->\n";
    cin>>b;
    cout<<"The Kth bit of the input is \n" ;
    IsKthbitset(a,b);                                                                 
    
    return 0;
}
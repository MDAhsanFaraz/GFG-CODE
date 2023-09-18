//Implementing efficient method <<1>>iterative method  ((eucliclean algorithm))
#include<iostream>
int gcd ( int a ,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}
using namespace std;
int main(){
    int a,b;
     cout<<"Enter value of a and b\n";
      cin>>a>>b;
      cout <<"GCD of a and b is :: \t"<<gcd( a,  b);
    
    return 0;
}
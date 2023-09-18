//Implementing efficient method <<2>>recursive method  ((eucliclean algorithm))
#include<iostream>
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else {
        return gcd (b,a%b);
    }
}
using namespace std;
int main(){
    int a,b;
     cout<<"Enter value of a and b\n";
      cin>>a>>b;
      cout <<"GCD of a and b is :: \t"<<gcd( a,  b);
    
    
    return 0;
}
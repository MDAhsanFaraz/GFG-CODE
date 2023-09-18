//Implementing efficient method 
#include<iostream>
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else {
        return gcd (b,a%b);
    }
}
int lcm(int c, int d){

    return(c*d)/gcd(c,d);
}
using namespace std;
int main(){
    int a,b;
     cout<<"Enter value of a and b\n";
      cin>>a>>b;
      cout <<"LCM of a and b is :: \t"<<lcm( a,  b);
    
    return 0;
}
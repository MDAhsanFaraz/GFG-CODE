///naive method 
#include<iostream>
int gcd (int a ,int b){
    int res = std ::min(a,b);
    while(res>0){
        if (a%res==0&&b%res==0){
            break;
        }
        res--;
    }
return res ;
}
using namespace std;
int main(){
      int a ,b;
      cout<<"Enter value of a and b\n";
      cin>>a>>b;
      cout <<"GCD of a and b is :: \t"<<gcd( a,  b);
    return 0;
}
#include<iostream>
using namespace std;
int lcm(int a,int b){
    int res =  max (a,b);
    while (true){
if (res%a==0 && res%b==0){
    return res;
}
res++;
    }
    
}

int main(){
    int a,b;
     cout<<"Enter value of a and b\n";
      cin>>a>>b;
      cout <<"LCM of a and b is :: \t"<<lcm( a,  b);
    
    
    return 0;
}
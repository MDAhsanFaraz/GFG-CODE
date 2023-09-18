///EFFICIENT METHOD FOR TRAILING NUMBER OF ZEROS
#include<iostream>
int countzeros(int n){
    int res=0;
       int fact=1 ;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    for(int i =5;i<=fact;i=i*5){
        res=res+n/i;
    }
    return res;
}

using namespace std;
int main(){
    int b;
cout <<"enter number:: ";
cin>>b;
cout<<"number of zeros is:: "<<countzeros(b);
    return 0;
      }
    
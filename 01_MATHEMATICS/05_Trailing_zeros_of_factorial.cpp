//trailing zeros of factorial 
//NAIEVE METHOD
#include<iostream>
int countzeros(int n){
    int res=0;
       int fact=1 ;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    while(fact%10==0){
        res++;
        fact =fact/10;
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
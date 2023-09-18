//iterative method
#include<iostream>
int fact (int n){
    int res=1 ;
    for(int i=2;i<=n;i++){
        res=res*i;
    }
    return res;
}

using namespace std;
int main(){
    int v,c;
    cout <<"enter number::\t";
    cin>>v;
    
    cout<<" Factorial is ::"<<" "<<fact(v);
    


    return 0;
}
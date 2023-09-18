#include<iostream>

using namespace std;
int ispali(int a){
    int rev=0;
    int temp=a;
    while (temp!=0){
        int ld= temp%10;
        rev==rev*10+ld;
        temp =temp/10;


    }
    if(rev==a){
        return rev=1;
    }
    else{
        return rev=0;
    }
}
int main(){
    int n=989;
  
    int b = ispali(n);
    if (b==1 ){
        cout<<"Your number is palidrom";
    }
    else if (b==0)
    {
        cout <<"Your number is not palidrom";
    }

    
    return 0;
}
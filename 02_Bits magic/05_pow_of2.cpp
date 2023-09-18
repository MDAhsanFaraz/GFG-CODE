// naive method
#include<iostream>


using namespace std;
bool isPow2(int n){
    if (n==0){
        return false;
    }
    

    
    else{
    while(n!=1){
        if(n%2!=0){
            return false;
            
        }
        n=n/2;


    }
    }
    return true;
}
int main() {
	
	int n = 0;
    cout<<"Enter value of input:";
    cin>>n;
	
	cout<<(isPow2(n)? "true": "false");

}
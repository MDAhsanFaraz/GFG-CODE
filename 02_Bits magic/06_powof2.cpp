// method 2 using Brain krenigams algo
#include<iostream>

using namespace std;
bool isPow2(int n){
    return(!(n!=0)&&((n&(n-1))==0));
}
int main() {
	
	int n = 0;
    cout<<"Enter value of input:";
    cin>>n;
	
	cout<<(isPow2(n)? "true": "false");

}
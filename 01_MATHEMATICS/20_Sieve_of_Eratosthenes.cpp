// naive solution
// prints all the prime factor less than n
#include<iostream>
using namespace std;
  bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}
void printprime(int n){
for (int i=2;i<=n;i++){
    if(isprime(i)){
        cout<<i<<"\n";

    }
}
}


int main(){
    int n;
    cout<<"enter value of n \n";
    cin>>n;
    printprime(n);
    
    return 0;
}
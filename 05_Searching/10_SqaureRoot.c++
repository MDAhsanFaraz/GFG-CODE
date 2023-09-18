// naive code
#include<iostream>

using namespace std;
int SquareRoot(int a)
{
          int i=1;
          while(i*i<=a)
          {
                    i++;
          }
          return (i-1);
}
int main(){
          int d=789;
          cout<<SquareRoot(d);
          

          return 0;
}                   
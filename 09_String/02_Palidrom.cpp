// naive
#include<iostream>
#include <algorithm>
using namespace std;
bool isPal(string &str)
{
          string res=str;
          reverse(res.begin(),res.end());
          return (res==str);
}
int main(){
          string str="abae";
         if (isPal(str))
         {
          cout<<"yes";

         }
         else
         {
          cout<<"no";
         }

          return 0;
}
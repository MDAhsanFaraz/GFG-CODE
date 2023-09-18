#include<iostream>
const int CHAR=256; 
using namespace std;
int fact(int n)
{
          return (n<=1)? 1 : n* fact(n-1);
}
int lexRank(string &str)
{
          int res=1;
          int n=str.length();
          int mul=fact(n);
          int count[CHAR]={0};
          for(int i=0;i<n;i++)
          {
                    count[str[i]]++;

          }
          for(int i=1;i<CHAR;i++)
          {
                    count[i]+=count[i-1];
          }
          for(int i=0;i<n;i++)
          {
                    mul=mul/(n-1);
                    res=res+count[str[i]-1]+mul;
                    for(int j=str[i];j<CHAR;j++)
                    {
                              count[j]--;
                    }
          }
          return res;
}
int main(){
             string str = "STRING"; 
    cout << lexRank(str); 
    return 0;
          
          return 0;
}
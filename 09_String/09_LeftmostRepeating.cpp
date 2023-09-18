// better than naive
#include<iostream>
const int  CHAR =256;
using namespace std;
int leftmost(string &str)
{
          int count[CHAR]={0};
          for(int i=0;i<str.length() ;i++)
          {
                    count[str[i]]++;

          }
          for(int i=0;i<str.length();i++)
          {
                    if(count[str[i]]>1)
                    {
                              return i;
                    }
          }
          return -1;

}
int main(){
                   string str="ifsasdfa";

        cout<<  leftmost(str); 
        if(leftmost(str)==-1)
        {
          cout<<"no repeting element";
        }
          
          return 0;
}
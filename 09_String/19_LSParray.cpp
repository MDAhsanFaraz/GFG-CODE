// naive
#include<iostream>

using namespace std;
int LongPropresuff(string &str,int n)
{
          for(int len=n-1;len>0;len-- )
          {
                    bool flag=true;
                    for(int i=0;i<len;i++)
                    {
                              if(str[i]!=str[n-len+i])
                              {
                                        flag=false;
                              }
                    }
                    if(flag==true)
                    {
                              return len;
                    }
          }
          return 0;
}
void fillLSP(string str,int *lps)
{
          for(int i=0;i<str.length();i++)
          {
                     lps [i]=LongPropresuff(str,i+1);
          }
}
int main(){
          string txt = "abacabad";
          int lps[txt.length()];
    fillLSP(txt,lps);
    for(int i=0;i<txt.length();i++){
        cout<<lps[i]<<" ";
    }
          
          return 0;
}
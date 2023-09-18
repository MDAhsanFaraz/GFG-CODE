#include<iostream>

using namespace std;
int main(){
          string str="geegksforgeeks";
          int count [26]={0};
          for(int i=0;i<str.length();i++)
          {
                    count[str[i]-'a']++;
                
          }
              for(int i=0;i<26;i++)
                    {
                              cout<<(char)(i+'a')<<" " <<count [i]<<"\n";//gives the frequency of the char in str
                    }

          return 0;
}
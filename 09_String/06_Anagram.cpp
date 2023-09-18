// naive
#include<iostream>
#include<algorithm>

using namespace std;
bool Anagram(string &s1,string &s2)
{
          if(s1.length()!=s2.length())
          {
                    return false;
          }
          sort(s1.begin(),s1.end());
           sort(s2.begin(),s2.end());
          return (s1==s2);
}
int main(){
          string s1="abam";
          string s2="maa";
          if(Anagram(s1,s2))
          {
                    cout<<"yes";
          }
          else{
                    cout<<"no";
          }

          return 0;
}
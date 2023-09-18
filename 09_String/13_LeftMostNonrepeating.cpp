// better approach
#include<iostream>
const int CHAR=256;
using namespace std;
int  nonrepeating(string &str)
{
          int count [CHAR]={0};
          for(int i=0;i<str.length();i++)
          {
                    count[str[i]]++;

          }
          for(int i=0;i<str.length();i++)
          {
                    if(count[str[i]]==1)
                    {
                    return i;
                    }

          }
          return -1;
}
int main(){
                    string str="asdfassdggawq";
          int i=nonrepeating(str);
          cout <<i;
          if(i==-1)
          {
                    cout<<"no non repeating element";

          }
          
          return 0;
}
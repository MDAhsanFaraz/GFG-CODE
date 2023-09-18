// naive
#include<iostream>

using namespace std;
int nonrepating (string &str)
{
          for(int i=0;i<str.length();i++)
          {
                    bool flag=false;
                    for(int j=0;j<str.length();j++)
                    {
                              if(i!=j&&str[i]==str[j])
                              {
                                        flag =true;
                                        break;
                              }

                    }
                    if(flag==false)
                    {
                              return i;
                    }
                     
          }
          return -1;
}
int main()
{
          string str="asdfassdggawq";
          int i=nonrepating(str);
          cout <<i;
          if(i==-1)
          {
                    cout<<"no non repeating element";

          }
          
          return 0;
}
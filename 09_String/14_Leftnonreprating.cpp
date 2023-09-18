// efficient
#include <iostream>
const int CHAR = 256;
using namespace std;
int nonrepeating(string &str)
{
          int fi[CHAR];
          int res = INT_MAX;
          fill(fi, fi + CHAR, -1);
          for (int i = 0; i < str.length(); i++)
          {
                    if (fi[str[i]] == -1)
                    {
                              fi[str[i]] = i; // means non repeating
                    }
                    else
                    {
                              fi[str[i]] = -2; // means repeating
                    }
          }
          for (int i = 0; i < str.length(); i++)
          {
                    if (fi[str[i]] >= 0)
                    {
                              res = min(res, fi[str[i]]);
                    }
          }
          return (res==INT_MAX)?-1:res;//if res==INT MAX then return -1 else return res va
}
int main()
{
          string str = "asdkfiassdggawq";
          int i = nonrepeating(str);
          cout << i;
          if (i == -1)
          {
                    cout << "no non repeating element";
          }

          return 0;
}
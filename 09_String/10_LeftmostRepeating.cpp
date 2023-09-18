// efficient 1
#include <iostream>
#include <algorithm>
const int CHAR = 256;
using namespace std;
int leftmost(string &str)
{
  int FI[CHAR];
  fill(FI, FI + CHAR, -1);
  int res = INT_MAX;
  for (int i = 0; i < str.length(); i++)
  {
    int f = FI[str[i]];
    if (f == -1)
    {
      FI[str[i]] = i;
    }
    else
    {
      res = min(res, f);
    }
  }
  return (res == INT_MAX) ? -1 : res;
}

int main()
{
  string str = "ifsasdfa";

  cout << leftmost(str);
  if (leftmost(str) == -1)
  {
    cout << "no repeting element";
  }

  return 0;
}
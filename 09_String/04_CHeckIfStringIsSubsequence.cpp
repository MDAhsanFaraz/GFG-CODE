// iterative solution
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isSubseq(string &s1, string &s2, int n, int m)
{
          int j = 0;
          for (int i = 0; i < n && j < m; i++)
          {
                    if (s1[i] == s2[j])
                    {
                              j++;
                    }
          }
          return (j == m);
}
int main()
{
          string s1 = "abdgh";
          string s2 = "agb";
          int n = 5;
          int m = 3;
          if (isSubseq(s1, s2, n, m))
          {
                    cout << "yes";
          }
          else
          {
                    cout << "no";
          }

          return 0;
}
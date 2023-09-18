// resursive
#include <iostream>

using namespace std;
bool isSubseq(string &s1, string &s2, int n, int m)
{
          if (m == 0)
          {
                    return true;
          }
          if (n == 0)
          {
                    return false;
          }
          if (s1[n - 1] == s2[m - 1])
          {
                    return isSubseq(s1, s2, n - 1, m - 1);
          }
          else
          {
                    return isSubseq(s1, s2, n - 1, m);
          }
}
int main()
{
          string s1 = "abdgh";
          string s2 = "ag";
          int n = 5;
          int m = 2;
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
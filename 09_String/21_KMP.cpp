#include <iostream>

using namespace std;
void filllps(string str, int *lps)
{
          int n = str.length();
          int len = 0;
          int i = 1;
          lps[0] = 0;
          while (i < n)
          {
                    if (str[i] == str[len])
                    {
                              len++;
                              lps[i] = len;
                              i++;
                    }
                    else
                    {
                              if (len == 0)
                              {
                                        lps[i] = 0;
                                        i++;
                              }

                              else
                              {
                                        len = lps[len - 1];
                              }
                    }
          }
}
void KMP(string &pat, string &txt)
{
          int N = txt.length();
          int M = pat.length();
          int lps[M];
          filllps(pat, lps);
          int i = 0, j = 0;
          while (i < N)
          {
                    if (pat[j] == txt[i])
                    {
                              i++;
                              j++;
                    }
                    if (j == M)
                    {
                              cout << "found pattern at index" << (i - j)<<"\n";
                              j = lps[j - 1];
                    }
                    else if (i < N && pat[j] != txt[i])
                    {
                              if (j == 0)
                              {
                                        i++;
                              }
                              else
                              {
                                        j = lps[j - 1];
                              }
                    }
          }
}
int main()
{
          string txt = "ababcababaadababa", pat = "ababa";
          KMP(pat, txt);
          return 0;

          return 0;
}
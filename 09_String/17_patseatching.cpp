// improved naive//only for dictinct character in th pat
// we will use the fact that the chracter are distinct

#include <iostream>

using namespace std;
void patsearching(string &txt, string &pat)
{
          int m = pat.length();
          int n = txt.length();
          for (int i = 0; i < (n - m); )
          {
                    int j;
                    for (j = 0; j < m; j++)
                    {
                              if (pat[j] != txt[i + j])
                              {
                                        break;
                              }
                    }
                    if (j == m)
                    {
                              cout << i << " ";
                    }
                    if(j==0)
                    {
                              i++;
                    }
                    else
                    {
                              i=(i+j);
                    }
          }
}
int main()
{
          string txt = "asdfasfasd";
          string pat = "fas";
          cout << "All index numbers where pattern found:"<< " ";

          patsearching(txt, pat);

          return 0;
}
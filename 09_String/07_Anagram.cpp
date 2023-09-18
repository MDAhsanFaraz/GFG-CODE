// naive
#include <iostream>
#include <algorithm>
const int CHAR = 256;

using namespace std;
bool Anagram(string &s1, string &s2)
{
          if (s1.length() != s2.length())
          {
                    return false;
          }
          int count[CHAR] = {0};
          for (int i = 0; i < s1.length(); i++)
          {
                    count[s1[i]]++;
                    count[s2[i]]--;
          }
          for (int i = 0; i < CHAR; i++)
          {
                    if (count[i] != 0)
                    {
                              return false;
                    }
          }

          return true;
}
int main()
{
          string s1 = "abam";
          string s2 = "maba";
          if (Anagram(s1, s2))
          {
                    cout << "yes";
          }
          else
          {
                    cout << "no";
          }

          return 0;
}
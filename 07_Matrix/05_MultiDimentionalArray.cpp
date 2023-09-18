// vector of vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
          int m = 3, n = 2;
          vector<vector<int>> vec;
          for (int i = 0; i < m; i++)
          {
                    vector<int> v; // creating vector to push it in the vector of vector
                    for (int j = 0; j < n; j++)
                    {
                              v.push_back(10);  // pushing int value in vector v
                              
                    }
                    vec.push_back(v); // pushing vector v in vector of vector
          }
          for (int i = 0; i < vec.size(); i++)
          {
                    for (int j = 0; j < vec[i].size(); j++)
                    {
                              cout << vec[i][j] << " ";
                    }
                    cout<<"\n";
          }

          return 0;
}
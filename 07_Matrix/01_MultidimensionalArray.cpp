#include <iostream>

using namespace std;
int main()
{
          int arr[2][3] = {{2, 3, 4},
                           {43, 2, 2}};

          for (int i = 0; i < 2; i++)
          {
                    for(int j=0;j<3;j++)
                    {
                              cout<<arr[i][j]<<" ";
                    }
                    cout<<"\n";
          }
          return 0;
}
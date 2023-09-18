// Creating Multidimentional array Using Double array pointer  
#include <iostream>

using namespace std;
int main()
{
          int m = 3, n = 2;
          int **arr;//creating double pointer;
          arr = new int *[m];
         for(int i=0;i<m;i++)
         {
          arr[i]=new int [n];//Dynamically allocating memory for each array in row 
         }
          for (int i=0;i<m;i++)
          {
                    for(int j=0;j<n;j++)
                    {
                              arr[i][j]=10;
                              cout<<arr[i][j]<<" ";
                             
                    }
                    cout<<"\n";
                    
          }

          return 0;
}
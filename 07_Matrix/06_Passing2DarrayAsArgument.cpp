#include<iostream>

using namespace std;
void print(int arr[2][3])
{
              for (int i = 0; i < 2; i++)
          {
                    for (int j = 0; j < 3; j++)
                    {
                              cout << arr[i][j] << " ";
                    }
                    cout<<"\n";
          }
}
int main(){
int arr[2][3]={{2,3,43},
                {4,5,3}};
                print(arr);    
          return 0;
}
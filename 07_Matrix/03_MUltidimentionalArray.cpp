// Using array of pointer
#include<iostream>

using namespace std;
int main(){
          int m=3,n=2;
          int *arr[m];//creating array of pointer
          for(int i=0;i<m;i++)
          {
                    arr[i]=new int [n];//dynamically allocating memory for each index of the pointer array    

                                                                         
                  
          }
          for(int i=0;i<m;i++) 
          {
                    for(int j=0;j<n;j)
                    {
                              arr[i][j]=10;//initailizing each array in each index of the pointer array
                              cout<<arr[i][j]<<" ";
                    }
                    cout<<"\n";
          }
          return 0;
}
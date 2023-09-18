// naive
#include<iostream>


using namespace std;
void SelectionSort(int arr[],int n)
{
          int temp[n];
          for(int i=0;i<n;i++)
          {
                    int min_int=0;
                    for(int j=0;j<n;j++)
                    {
                              if(arr[j]<arr[min_int])
                              {
                                        min_int =j;
                              }
                    }
                    temp[i]=arr[min_int];
                    arr[min_int]=10000;
          }
          for(int i=0;i<n;i++)
          {
                    arr[i]=temp[i];
          }
}
int main(){
          int arr[]={23,5,63,13,6,76,51,3};
          int n = sizeof(arr) / sizeof(arr[0]);
          SelectionSort(arr,n);
             for(int i=0;i<n;i++)
          {
                    cout<<arr[i]<<"\n";
          }

          

          
          return 0;
}
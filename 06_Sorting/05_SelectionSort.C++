// Efficient
#include<iostream>


using namespace std;
void SelectionSort(int arr[],int n)
{
         
          for(int i=0;i<n;i++)
          {
                    int min_int=i;
                    for(int j=i+1;j<n;j++)
                    {
                              if(arr[j]<arr[min_int])
                              {
                                        min_int =j;
                              }
                    }
                    swap(arr[min_int],arr[i]);
                    
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
// effficient
#include<iostream>

using namespace std;
void Bubblesort(int arr[],int n)
{
          bool swapped;
          for(int i=0;i<n-1;i++)
          {
                    swapped=false;
                    for(int j=0;j<n-i-1;j++)
                    {
                              if(arr[j]>arr[j+1])
                              {
                                        swap(arr[j],arr[j+1]);
                                        swapped=true;
                              }
                           
                    }
                       if(swapped==false)//only for when array is sorted
                              {
                                        break;
                              }
          }
}
int main(){
          int arr[]={23,432,5,46,542,34,25};
          int n = sizeof(arr) / sizeof(arr[0]);
         Bubblesort(arr,n);
         	for(int i = 0;i < n; i++){
	    cout<<arr[i]<<" ";
	}
          return 0;
}
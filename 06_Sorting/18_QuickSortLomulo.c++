#include<iostream>

using namespace std;
int Lomulo(int arr[],int l,int h)
{
          int pivot=arr[h];
          int i=l-1;
          for(int j=l;j<=h-1;j++)
          {
                    if(arr[j]<pivot)
                    {
                              i++;
                              swap(arr[i],arr[j]);
                    }
          }
          swap(arr[i+1],arr[h]);
          return i+1;//returns index of the pivot
}
void QuickSort(int arr[],int l,int h)
{
          if(l<h)
          {
                    int p=Lomulo(arr,l,h);
                    QuickSort(arr,l,p-1);
                    QuickSort(arr,p+1,h);
          }
}
int main(){
          int arr[]={23,442,123,412,432,554,2,6,7};
          int l=0,h=8;
          QuickSort(arr,l,h);
     
          cout<<"array after partition\n";
          for(int i=0;i<9;i++)
          {
                    cout<<arr[i]<<" ";
          }
          
          return 0;
}

                      







#include<iostream>

using namespace std;
int Hoares(int arr[],int l,int h)
{
        int pivot=arr[l];
        int i=l-1;
        int j=h+1;
        while(true)
        {
          do{
                    i++;
          }while(arr[i]<pivot);
          do{
                    j--;
          }while(arr[j]>pivot);
          if(i>=j)
          {
                    return j;
          }
          swap(arr[i],arr[j]);


        }
}
int main(){
          int arr[]={23,442,123,412,432,554,2,6,7};
          int l=0,h=8;
          cout<<"Srarting index of elements greater than pivot = "<<Hoares(arr,l,h)<<"\n";
          cout<<"array after partition\n";
          for(int i=0;i<9;i++)
          {
                    cout<<arr[i]<<" ";
          }
          
          return 0;
}

                      







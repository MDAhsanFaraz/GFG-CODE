#include<iostream>

using namespace std;
void Sort3value(int arr[],int n)
{
          int low=0,mid=0,h=n-1;
          while(mid<=h)
          {
                    if(arr[mid]==0)
                    {
                              swap(arr[low],arr[mid]);
                              low++;
                              mid++;

                    }
                    else if(arr[mid]==1)
                    {
                              mid++;
                    }
                    else
                    {
                              swap(arr[mid],arr[h]);
                              h--;
                    }
          }
}
int main(){
          int arr[]={0,1,2,0,1,0,2,0,1,2};
          Sort3value(arr,10);
            for(int i=0;i<10;i++)
          {
                    cout<<arr[i]<<" ";
          }
          return 0;
}
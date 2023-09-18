#include<iostream>
void reverse(int arr[],int n)
{
          int low=0,high=n-1;
          while(low<high)
          {
                    int temp=arr[low];
                    arr [low] =arr[high];
                    arr[high]=temp;
                    low++;
                    high--;
          }
}

using namespace std;
int main(){
          int arr[]={45,4,354,3,6,77,43,1,23};
          int n=9;
          cout<<"before reverse \n";
          for(int i=0;i<n;i++)
          {
                    cout<<arr[i]<<"\t";
          }
          cout<<endl;
          reverse(arr,n);
          cout<<"after reverse \n";
             for(int i=0;i<n;i++)
          {
                    cout<<arr[i]<<"\t";
          }
          
          return 0;
}
//only works for sorted array
#include<iostream>

using namespace std;
void PrintFreq(int arr[],int n)
{
          int freq=1;
          int i=1;
          while (i<n)
          {
            while(i<n&&arr[i]==arr[i-1])
            {
                      freq++;
                      i++;
            }
            cout<<"Element ="<<arr[i-1]<<" Frequency="<<freq<<"\n";
            i++;
            freq=1;
          }
          if(n==1|arr[n-1]!=arr[n-2])
          {
                cout<<"Element ="<<arr[n-1]<<" Frequency="<<"1";    
          }
          
}
int main(){
          
          int arr[]={12,32,32,3,2,3,3,3,4,4,4,12,5};
          int n=13;
          PrintFreq(arr, n);
          return 0;
}
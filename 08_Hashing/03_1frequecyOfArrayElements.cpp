//naive
#include<iostream>

using namespace std;
void PrintFreq(int arr[],int n)
{
          for(int i=0;i<n;i++)
          {
                    bool flag= false;
                    for(int j=0;j<i;j++)
                    {
                              if(arr[i]==arr[j])
                              {
                                        flag=true;
                                        break;
                                        
                              }
                    }
                    if(flag ==true )
                    {
                              continue;
                    }
                    int freq=1;
                    for(int j=i+1;j<n;j++)
                    {
                              if (arr[i]==arr[j])
                              {
                                        freq++;
                              }
                    }
                    cout<<arr[i]<<" "<<freq<<endl;
          }
}
int main(){
          int arr[]={23,45,23,54,23,5,6,3,6,23};
          int n=10;
          PrintFreq(arr,n);
          return 0;
}
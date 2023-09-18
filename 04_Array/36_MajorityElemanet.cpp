//naive
#include<iostream>

using namespace std;
int Findmajority(int arr[], int n)
{
          for (int i=0;i<n;i++)
          {
                    int count =1;
                    for(int j=i+1;j<n;j++)
                    {
                              if(arr[i]==arr[j])
                              {
                                        count ++;
                              }
                    }
                    if(count >n/2)

                    {
                              return i;
                    }
          }
          return -1;
}
int main(){
          int arr[]={1,1,3,3,4,4,4,4,4};
          int n=9;
          cout<<"majority element is \t"<<Findmajority(arr,n);
          return 0;
}